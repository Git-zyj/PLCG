#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
signed char var_2 = (signed char)16;
long long int var_9 = 8997695413391653230LL;
short var_10 = (short)5237;
unsigned short var_11 = (unsigned short)8804;
int zero = 0;
int var_13 = -810231082;
long long int var_14 = 8290075062607021453LL;
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
