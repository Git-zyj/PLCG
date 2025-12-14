#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = 1674075807;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)55395;
unsigned short var_12 = (unsigned short)39033;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
