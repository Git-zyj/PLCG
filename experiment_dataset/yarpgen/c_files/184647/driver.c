#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)41;
unsigned long long int var_8 = 2692388068775841891ULL;
int var_13 = -1037304452;
int zero = 0;
int var_17 = -1219956393;
unsigned short var_18 = (unsigned short)60803;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)127;
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
