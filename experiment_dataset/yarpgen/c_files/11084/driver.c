#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1468674571U;
signed char var_3 = (signed char)0;
signed char var_9 = (signed char)111;
long long int var_10 = 5293103436794605538LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-83;
int var_13 = 1054237790;
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
