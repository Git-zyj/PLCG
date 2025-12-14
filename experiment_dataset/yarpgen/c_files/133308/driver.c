#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18651;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)52236;
unsigned int var_12 = 1473954702U;
int zero = 0;
unsigned char var_13 = (unsigned char)20;
signed char var_14 = (signed char)28;
void init() {
}

void checksum() {
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
