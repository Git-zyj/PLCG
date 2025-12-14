#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13052628333682606892ULL;
unsigned long long int var_1 = 5626031647808612894ULL;
short var_2 = (short)-8437;
unsigned int var_3 = 2784064023U;
short var_5 = (short)10147;
unsigned int var_6 = 2893459842U;
short var_9 = (short)28331;
int zero = 0;
long long int var_11 = -9160728577277524150LL;
long long int var_12 = -4129891839117929589LL;
short var_13 = (short)-27192;
short var_14 = (short)6245;
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
