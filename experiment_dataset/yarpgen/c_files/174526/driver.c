#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 299837758U;
long long int var_11 = -1332713230059780892LL;
int var_14 = 1648341654;
int zero = 0;
signed char var_15 = (signed char)12;
signed char var_16 = (signed char)57;
long long int var_17 = 2478051531766279732LL;
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
