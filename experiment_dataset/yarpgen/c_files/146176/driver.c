#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned short var_4 = (unsigned short)7283;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 1390531188U;
int zero = 0;
unsigned int var_12 = 565031163U;
unsigned short var_13 = (unsigned short)41038;
unsigned int var_14 = 823361193U;
void init() {
}

void checksum() {
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
