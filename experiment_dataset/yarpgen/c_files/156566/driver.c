#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4107996310854074972LL;
signed char var_7 = (signed char)-33;
int var_10 = -1013106327;
int zero = 0;
short var_11 = (short)19892;
_Bool var_12 = (_Bool)1;
short var_13 = (short)746;
signed char var_14 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
