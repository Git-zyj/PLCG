#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25620;
long long int var_8 = 284141365924060974LL;
long long int var_10 = -9187371195804226747LL;
unsigned short var_11 = (unsigned short)22431;
int zero = 0;
int var_12 = -299823754;
unsigned char var_13 = (unsigned char)191;
int var_14 = 1912256318;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
