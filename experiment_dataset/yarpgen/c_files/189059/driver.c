#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4634441586250837505LL;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)45;
signed char var_8 = (signed char)0;
int zero = 0;
int var_17 = 1521438161;
signed char var_18 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
