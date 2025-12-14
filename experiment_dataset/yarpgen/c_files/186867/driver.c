#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 17526687343714678816ULL;
unsigned char var_10 = (unsigned char)135;
int zero = 0;
short var_14 = (short)-13548;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3837798589U;
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
