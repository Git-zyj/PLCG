#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3319172445261713770LL;
unsigned int var_8 = 4140638585U;
int var_10 = -16820706;
int var_16 = -1367197818;
int zero = 0;
signed char var_18 = (signed char)8;
unsigned int var_19 = 3540265568U;
void init() {
}

void checksum() {
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
