#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)35066;
unsigned long long int var_9 = 1372017330975278295ULL;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)55508;
signed char var_18 = (signed char)87;
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
