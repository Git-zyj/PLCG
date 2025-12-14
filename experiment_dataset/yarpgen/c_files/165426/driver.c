#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
unsigned short var_5 = (unsigned short)24791;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15847952434697336260ULL;
unsigned char var_9 = (unsigned char)236;
unsigned short var_13 = (unsigned short)58151;
int zero = 0;
int var_14 = 2084038171;
unsigned short var_15 = (unsigned short)43771;
void init() {
}

void checksum() {
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
