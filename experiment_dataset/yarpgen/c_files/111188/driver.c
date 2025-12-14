#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)77;
unsigned int var_8 = 1218055603U;
signed char var_11 = (signed char)70;
signed char var_13 = (signed char)93;
signed char var_14 = (signed char)-35;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 1857155999;
signed char var_17 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
