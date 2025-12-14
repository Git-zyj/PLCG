#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 126918884;
unsigned int var_8 = 2403745686U;
unsigned long long int var_10 = 17616185296112850507ULL;
unsigned int var_11 = 1105799252U;
int zero = 0;
unsigned int var_12 = 3079788845U;
signed char var_13 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
