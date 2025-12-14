#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
_Bool var_2 = (_Bool)1;
int var_4 = 1389460864;
unsigned long long int var_10 = 13349521194056425898ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3985992152U;
unsigned long long int var_16 = 4532438073114218771ULL;
unsigned int var_17 = 2876679715U;
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
