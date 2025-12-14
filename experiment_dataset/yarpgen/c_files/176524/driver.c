#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2075798171U;
short var_4 = (short)6357;
signed char var_5 = (signed char)79;
unsigned int var_7 = 971432664U;
signed char var_8 = (signed char)-124;
int var_9 = -1575131790;
unsigned long long int var_11 = 16628964509174216228ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -689363833906682607LL;
int var_14 = 1557444939;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
