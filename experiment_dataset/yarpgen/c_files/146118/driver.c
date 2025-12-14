#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -396912395;
signed char var_3 = (signed char)72;
long long int var_4 = 3640996491861283711LL;
short var_8 = (short)-5526;
unsigned long long int var_9 = 14908962096226386823ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17458613836669442765ULL;
unsigned short var_16 = (unsigned short)59607;
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
