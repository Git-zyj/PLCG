#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1689741544U;
unsigned char var_5 = (unsigned char)14;
unsigned short var_13 = (unsigned short)7059;
unsigned long long int var_14 = 16722256259205369421ULL;
int var_15 = 1192260014;
short var_18 = (short)28881;
int zero = 0;
short var_19 = (short)-32285;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 16228672797453088750ULL;
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
