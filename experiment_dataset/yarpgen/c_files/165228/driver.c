#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 919419597U;
signed char var_1 = (signed char)-94;
short var_7 = (short)1135;
int zero = 0;
signed char var_12 = (signed char)28;
_Bool var_13 = (_Bool)0;
long long int var_14 = -365805323154596783LL;
void init() {
}

void checksum() {
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
