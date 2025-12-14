#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4050601991U;
unsigned char var_2 = (unsigned char)38;
long long int var_3 = 3944450522300248745LL;
signed char var_8 = (signed char)8;
int var_11 = -1769717734;
int zero = 0;
int var_16 = 1931484047;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
