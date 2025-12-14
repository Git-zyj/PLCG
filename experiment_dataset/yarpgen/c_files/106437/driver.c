#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 145555407U;
unsigned int var_5 = 2321283662U;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1810583500U;
unsigned char var_13 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
