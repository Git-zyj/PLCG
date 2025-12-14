#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2012267399;
unsigned char var_1 = (unsigned char)53;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)105;
unsigned long long int var_15 = 15967890198078670139ULL;
unsigned char var_16 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
