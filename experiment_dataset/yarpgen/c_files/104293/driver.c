#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52928;
unsigned long long int var_6 = 3863751196380290805ULL;
unsigned long long int var_12 = 9120092983054375103ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-61;
unsigned int var_19 = 379675260U;
void init() {
}

void checksum() {
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
