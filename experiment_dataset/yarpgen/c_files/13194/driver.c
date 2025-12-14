#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 17968535664442487085ULL;
int var_12 = -1194825602;
unsigned short var_16 = (unsigned short)48296;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-18;
void init() {
}

void checksum() {
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
