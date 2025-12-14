#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 674566020;
signed char var_4 = (signed char)42;
int var_10 = 985480585;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_20 = 455233558;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
