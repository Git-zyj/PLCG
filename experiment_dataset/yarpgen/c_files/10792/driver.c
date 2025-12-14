#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)126;
short var_4 = (short)24188;
unsigned char var_5 = (unsigned char)107;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3194065647U;
signed char var_13 = (signed char)69;
short var_14 = (short)-8465;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
