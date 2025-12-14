#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
unsigned long long int var_3 = 8859869022038496447ULL;
unsigned char var_14 = (unsigned char)32;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1052158333U;
void init() {
}

void checksum() {
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
