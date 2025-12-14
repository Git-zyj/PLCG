#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1912985633;
signed char var_2 = (signed char)63;
unsigned char var_7 = (unsigned char)255;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1601999932658948973LL;
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
