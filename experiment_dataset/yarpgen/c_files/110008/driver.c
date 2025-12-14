#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4551846871827875475ULL;
int var_2 = 1797712443;
short var_3 = (short)15150;
unsigned short var_4 = (unsigned short)61105;
short var_5 = (short)29788;
short var_10 = (short)-13124;
int zero = 0;
long long int var_12 = 8219446958852731458LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)43050;
unsigned long long int var_15 = 5696921040438209040ULL;
short var_16 = (short)32482;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
