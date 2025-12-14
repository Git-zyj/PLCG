#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23227;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 842026599U;
int var_18 = 49721798;
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
