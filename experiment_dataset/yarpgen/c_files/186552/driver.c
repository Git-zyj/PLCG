#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8946735732609509987LL;
unsigned long long int var_8 = 10301367419935691360ULL;
short var_11 = (short)-13520;
unsigned int var_15 = 225030605U;
int zero = 0;
signed char var_17 = (signed char)-88;
unsigned long long int var_18 = 7299251438222026833ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
