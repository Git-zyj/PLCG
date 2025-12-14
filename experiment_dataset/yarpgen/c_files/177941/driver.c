#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 620187077U;
long long int var_8 = -6275410438635667325LL;
int zero = 0;
unsigned long long int var_13 = 5026053904414393987ULL;
unsigned char var_14 = (unsigned char)189;
signed char var_15 = (signed char)-15;
unsigned long long int var_16 = 3968540619000840484ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
