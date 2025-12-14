#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
short var_3 = (short)-5093;
unsigned long long int var_7 = 59218190588666302ULL;
unsigned int var_8 = 2324254246U;
signed char var_13 = (signed char)-48;
long long int var_14 = 8478697139596067153LL;
signed char var_15 = (signed char)104;
int zero = 0;
unsigned long long int var_17 = 1293271643141459068ULL;
signed char var_18 = (signed char)-20;
unsigned int var_19 = 1692138495U;
short var_20 = (short)1942;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
