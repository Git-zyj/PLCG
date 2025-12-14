#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1849049771;
signed char var_2 = (signed char)38;
signed char var_6 = (signed char)90;
signed char var_9 = (signed char)-44;
signed char var_14 = (signed char)70;
unsigned long long int var_15 = 2471124500572166083ULL;
int zero = 0;
unsigned long long int var_16 = 3608900491575236587ULL;
signed char var_17 = (signed char)122;
signed char var_18 = (signed char)-77;
signed char var_19 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
