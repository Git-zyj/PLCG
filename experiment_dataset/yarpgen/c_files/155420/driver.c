#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned int var_2 = 2588381008U;
unsigned long long int var_5 = 16483311084711891999ULL;
int var_12 = 1201887960;
signed char var_15 = (signed char)-92;
unsigned int var_17 = 876349048U;
int zero = 0;
int var_19 = -1785809258;
int var_20 = -1713849699;
signed char var_21 = (signed char)89;
unsigned short var_22 = (unsigned short)8660;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
