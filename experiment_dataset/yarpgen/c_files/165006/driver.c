#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 189691947;
int var_10 = -1840854303;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int var_15 = 912094434;
int zero = 0;
signed char var_20 = (signed char)52;
_Bool var_21 = (_Bool)0;
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
