#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3568810409U;
unsigned char var_4 = (unsigned char)105;
int var_6 = 2118035919;
unsigned short var_7 = (unsigned short)55699;
unsigned int var_8 = 2936335946U;
unsigned long long int var_9 = 4212231549837538305ULL;
short var_10 = (short)1795;
unsigned short var_11 = (unsigned short)44338;
int var_12 = -1622135494;
int zero = 0;
long long int var_14 = -9021682534512711763LL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)34116;
short var_17 = (short)14182;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
