#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 568285968U;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 3247301836U;
long long int var_11 = 2141991050946272724LL;
int zero = 0;
unsigned long long int var_13 = 17856767767374549805ULL;
int var_14 = -2142413179;
void init() {
}

void checksum() {
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
