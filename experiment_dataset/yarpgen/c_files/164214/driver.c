#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25220;
signed char var_5 = (signed char)8;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)211;
unsigned int var_14 = 3856011334U;
signed char var_15 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
