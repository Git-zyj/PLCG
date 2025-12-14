#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12391;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 12015509652145443008ULL;
unsigned short var_15 = (unsigned short)49095;
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
