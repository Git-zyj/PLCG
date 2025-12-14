#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4824098937787810843LL;
unsigned short var_1 = (unsigned short)32911;
long long int var_3 = -1827086784005383593LL;
unsigned short var_8 = (unsigned short)4029;
long long int var_9 = -4292697537266609500LL;
unsigned int var_11 = 2415159140U;
int zero = 0;
unsigned short var_12 = (unsigned short)44445;
signed char var_13 = (signed char)-67;
long long int var_14 = 8886070858980315715LL;
long long int var_15 = -7637810295619737757LL;
unsigned long long int var_16 = 17310446183942862113ULL;
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
