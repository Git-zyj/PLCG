#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)144;
int var_5 = 2012272768;
long long int var_10 = 5947078881460361638LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 795775207548971972ULL;
unsigned char var_17 = (unsigned char)181;
unsigned int var_18 = 2719414648U;
void init() {
}

void checksum() {
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
