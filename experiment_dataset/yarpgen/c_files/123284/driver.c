#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
signed char var_4 = (signed char)97;
signed char var_8 = (signed char)45;
unsigned int var_11 = 3282084337U;
unsigned int var_12 = 2162143209U;
signed char var_17 = (signed char)-9;
signed char var_18 = (signed char)-1;
int zero = 0;
unsigned short var_20 = (unsigned short)57119;
signed char var_21 = (signed char)-50;
signed char var_22 = (signed char)99;
void init() {
}

void checksum() {
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
