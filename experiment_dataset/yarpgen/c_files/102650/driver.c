#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
short var_2 = (short)9902;
unsigned int var_7 = 1999886771U;
unsigned int var_11 = 2681793402U;
unsigned char var_15 = (unsigned char)240;
unsigned int var_17 = 2562888507U;
int zero = 0;
unsigned char var_18 = (unsigned char)104;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
