#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16004417912641390762ULL;
long long int var_5 = 8070716780423998431LL;
unsigned long long int var_17 = 12539521198460414531ULL;
int zero = 0;
long long int var_20 = -7380787255564265323LL;
long long int var_21 = 2842043610408596270LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
