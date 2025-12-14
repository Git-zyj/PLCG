#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)208;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 144614798U;
int zero = 0;
long long int var_12 = -2536005478215559757LL;
int var_13 = 1243410762;
long long int var_14 = -1124156207613383831LL;
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
