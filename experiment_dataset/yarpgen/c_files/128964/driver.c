#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1949;
unsigned char var_1 = (unsigned char)195;
unsigned short var_2 = (unsigned short)64155;
unsigned char var_4 = (unsigned char)62;
unsigned char var_5 = (unsigned char)106;
signed char var_6 = (signed char)19;
unsigned int var_9 = 3654328790U;
int zero = 0;
short var_10 = (short)-23379;
int var_11 = -1602481127;
unsigned int var_12 = 238944067U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
