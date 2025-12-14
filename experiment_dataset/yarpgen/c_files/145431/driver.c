#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -583741614;
unsigned short var_3 = (unsigned short)7658;
int var_8 = 1842813467;
unsigned short var_10 = (unsigned short)38420;
int zero = 0;
short var_14 = (short)-11647;
long long int var_15 = -617638427992988825LL;
int var_16 = -1521743275;
void init() {
}

void checksum() {
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
