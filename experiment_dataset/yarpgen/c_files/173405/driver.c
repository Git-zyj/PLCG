#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5815727331324671324LL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)14;
unsigned long long int var_10 = 12548066209434743518ULL;
unsigned short var_14 = (unsigned short)6236;
int zero = 0;
int var_19 = 261497134;
int var_20 = -993861763;
void init() {
}

void checksum() {
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
