#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7645125533730544543LL;
unsigned long long int var_3 = 3606389932534185668ULL;
short var_5 = (short)31005;
unsigned int var_7 = 280314138U;
unsigned char var_9 = (unsigned char)145;
short var_10 = (short)-11078;
int zero = 0;
unsigned short var_15 = (unsigned short)6285;
unsigned short var_16 = (unsigned short)62263;
void init() {
}

void checksum() {
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
