#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1813;
_Bool var_1 = (_Bool)0;
int var_3 = -1205041996;
unsigned int var_4 = 1855853937U;
int var_5 = 1085764082;
unsigned short var_7 = (unsigned short)20030;
long long int var_8 = 9125285716859450942LL;
int var_10 = 1063461905;
unsigned char var_11 = (unsigned char)29;
int zero = 0;
unsigned long long int var_14 = 15428048940877060955ULL;
long long int var_15 = -222254496792466181LL;
signed char var_16 = (signed char)-71;
unsigned int var_17 = 3186512517U;
unsigned long long int var_18 = 4800193107436722157ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
