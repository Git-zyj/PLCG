#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -1660804788;
signed char var_12 = (signed char)-81;
int zero = 0;
long long int var_20 = -5792538993353184764LL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)4222;
short var_23 = (short)-26056;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
