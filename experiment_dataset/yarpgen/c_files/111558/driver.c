#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)2042;
signed char var_15 = (signed char)-29;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -951046179;
_Bool var_21 = (_Bool)0;
short var_22 = (short)17695;
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
