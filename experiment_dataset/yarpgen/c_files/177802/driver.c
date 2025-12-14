#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6907817594772833063LL;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 4096920031U;
signed char var_14 = (signed char)-109;
int zero = 0;
int var_19 = 2058501453;
unsigned int var_20 = 3896229594U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
