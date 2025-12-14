#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16963518391213234866ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_10 = 627454044U;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -331579996;
int var_19 = 1943545568;
unsigned int var_20 = 708141145U;
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
