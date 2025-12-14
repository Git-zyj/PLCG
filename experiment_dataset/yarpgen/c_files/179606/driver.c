#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8770535167268803488ULL;
unsigned short var_3 = (unsigned short)45928;
unsigned long long int var_4 = 5742225075120444962ULL;
unsigned short var_7 = (unsigned short)23152;
int zero = 0;
unsigned long long int var_20 = 10555558683045854055ULL;
signed char var_21 = (signed char)75;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1670415488U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
