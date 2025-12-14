#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1173434409;
short var_10 = (short)-11346;
unsigned char var_11 = (unsigned char)80;
long long int var_13 = 247882608049971875LL;
unsigned char var_15 = (unsigned char)189;
unsigned short var_18 = (unsigned short)2879;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
int var_20 = -1856872092;
long long int var_21 = 3457942784695273948LL;
void init() {
}

void checksum() {
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
