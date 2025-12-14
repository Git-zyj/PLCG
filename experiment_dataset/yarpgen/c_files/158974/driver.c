#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-80;
short var_3 = (short)-19797;
unsigned long long int var_4 = 6696127190276763874ULL;
short var_8 = (short)4513;
unsigned char var_10 = (unsigned char)44;
signed char var_11 = (signed char)126;
short var_12 = (short)-5964;
unsigned int var_13 = 1703885473U;
int zero = 0;
long long int var_15 = 881372188206133880LL;
signed char var_16 = (signed char)14;
unsigned int var_17 = 114019891U;
unsigned int var_18 = 2765864006U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
