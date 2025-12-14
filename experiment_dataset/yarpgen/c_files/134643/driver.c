#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2623260563U;
unsigned short var_2 = (unsigned short)38674;
int var_7 = -1672150170;
signed char var_8 = (signed char)-3;
int zero = 0;
signed char var_11 = (signed char)46;
unsigned int var_12 = 3084700338U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
