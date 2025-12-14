#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_9 = (signed char)-42;
short var_11 = (short)31106;
short var_12 = (short)-6836;
int zero = 0;
unsigned long long int var_13 = 2461217648621314188ULL;
unsigned long long int var_14 = 6690647290626741924ULL;
short var_15 = (short)28341;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
