#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)157;
unsigned short var_6 = (unsigned short)58282;
unsigned int var_7 = 3469356668U;
long long int var_8 = 5463303967331245230LL;
int var_12 = -284514660;
unsigned int var_13 = 2009614462U;
int zero = 0;
unsigned short var_16 = (unsigned short)14781;
long long int var_17 = 2993273746113833039LL;
unsigned long long int var_18 = 6114868224347256878ULL;
unsigned short var_19 = (unsigned short)30075;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
