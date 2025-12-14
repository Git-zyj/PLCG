#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1491208708U;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 153519136U;
unsigned int var_10 = 3703378557U;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)13760;
unsigned char var_18 = (unsigned char)189;
unsigned int var_19 = 7485188U;
unsigned char var_20 = (unsigned char)241;
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
