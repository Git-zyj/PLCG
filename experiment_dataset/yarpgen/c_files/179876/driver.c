#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-7;
signed char var_7 = (signed char)22;
signed char var_8 = (signed char)8;
signed char var_11 = (signed char)-15;
signed char var_16 = (signed char)-65;
int zero = 0;
signed char var_17 = (signed char)-66;
signed char var_18 = (signed char)-110;
signed char var_19 = (signed char)-101;
signed char var_20 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
