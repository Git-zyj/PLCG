#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
int var_2 = -11382075;
unsigned int var_3 = 1422913954U;
unsigned long long int var_5 = 17844645072422558489ULL;
short var_10 = (short)-31627;
int zero = 0;
unsigned int var_12 = 4237526418U;
unsigned char var_13 = (unsigned char)162;
short var_14 = (short)24730;
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
