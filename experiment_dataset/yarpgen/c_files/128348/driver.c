#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)14;
signed char var_5 = (signed char)-114;
int var_6 = -2128185565;
int var_8 = 1337872263;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1195076484;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
