#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2190805138U;
short var_5 = (short)-30233;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4466387966664160529ULL;
unsigned char var_12 = (unsigned char)124;
unsigned long long int var_13 = 11686274480042138889ULL;
unsigned int var_14 = 4126171033U;
int zero = 0;
signed char var_15 = (signed char)-35;
long long int var_16 = 1207071360673400048LL;
unsigned short var_17 = (unsigned short)64412;
unsigned int var_18 = 105755547U;
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
