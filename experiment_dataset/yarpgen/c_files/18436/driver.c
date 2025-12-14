#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
int var_3 = 2027562715;
unsigned long long int var_9 = 4729577479548027890ULL;
unsigned short var_10 = (unsigned short)37127;
short var_11 = (short)-8570;
unsigned short var_16 = (unsigned short)25163;
long long int var_17 = -931265390123462678LL;
int zero = 0;
long long int var_18 = 1580578303398284327LL;
unsigned short var_19 = (unsigned short)46535;
unsigned char var_20 = (unsigned char)157;
unsigned short var_21 = (unsigned short)36912;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
