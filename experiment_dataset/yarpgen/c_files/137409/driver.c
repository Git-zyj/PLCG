#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28625;
long long int var_9 = 1631405497484881676LL;
signed char var_11 = (signed char)-47;
int zero = 0;
unsigned char var_12 = (unsigned char)213;
signed char var_13 = (signed char)-46;
long long int var_14 = 2934483682236821267LL;
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
