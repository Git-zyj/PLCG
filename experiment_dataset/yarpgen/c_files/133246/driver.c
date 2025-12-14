#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 5196589328690964929ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 3917033496364600371ULL;
unsigned char var_16 = (unsigned char)242;
_Bool var_17 = (_Bool)1;
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
