#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2024709004U;
signed char var_10 = (signed char)-42;
long long int var_13 = -8399625056987463328LL;
unsigned short var_15 = (unsigned short)33062;
int zero = 0;
int var_17 = -628824499;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)377;
int var_20 = 1470715283;
unsigned short var_21 = (unsigned short)11826;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
