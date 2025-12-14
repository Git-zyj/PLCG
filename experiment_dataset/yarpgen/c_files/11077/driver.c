#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 446311637899003962ULL;
unsigned int var_5 = 3460530052U;
long long int var_7 = 2761750146474112743LL;
unsigned char var_8 = (unsigned char)226;
long long int var_9 = -7326712148870046349LL;
signed char var_15 = (signed char)58;
int zero = 0;
signed char var_16 = (signed char)46;
unsigned char var_17 = (unsigned char)159;
signed char var_18 = (signed char)47;
unsigned char var_19 = (unsigned char)101;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)212;
unsigned int var_22 = 2709119771U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
