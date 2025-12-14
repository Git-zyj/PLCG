#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = -239097863;
unsigned char var_7 = (unsigned char)220;
unsigned short var_9 = (unsigned short)1122;
int zero = 0;
unsigned long long int var_13 = 2300063724882360378ULL;
unsigned int var_14 = 327202342U;
short var_15 = (short)-12315;
unsigned char var_16 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
