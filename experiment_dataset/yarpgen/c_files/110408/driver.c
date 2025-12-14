#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1541051430U;
short var_9 = (short)-32092;
unsigned int var_18 = 1000634122U;
int zero = 0;
unsigned int var_19 = 3082329708U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 6530847104316392939ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
