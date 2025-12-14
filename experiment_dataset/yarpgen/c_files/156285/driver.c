#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1656042666;
long long int var_1 = -4361087139580932103LL;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-23;
int zero = 0;
unsigned long long int var_12 = 4637927493074523262ULL;
int var_13 = 1788940524;
unsigned int var_14 = 84668391U;
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
