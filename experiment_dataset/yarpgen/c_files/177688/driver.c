#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -92931605;
int var_1 = 374243247;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 5475397704182953015ULL;
unsigned short var_6 = (unsigned short)28592;
unsigned long long int var_13 = 15153581574175740718ULL;
int zero = 0;
signed char var_14 = (signed char)76;
int var_15 = -1013974446;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
