#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1692553453U;
signed char var_3 = (signed char)-25;
unsigned short var_8 = (unsigned short)18651;
unsigned int var_9 = 37943996U;
long long int var_13 = -8539602058302510040LL;
short var_16 = (short)796;
int zero = 0;
signed char var_17 = (signed char)-9;
int var_18 = -1013102611;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
