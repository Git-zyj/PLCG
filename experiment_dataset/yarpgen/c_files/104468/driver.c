#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
signed char var_3 = (signed char)-61;
signed char var_4 = (signed char)106;
signed char var_6 = (signed char)113;
signed char var_7 = (signed char)-99;
int zero = 0;
signed char var_15 = (signed char)80;
signed char var_16 = (signed char)-25;
signed char var_17 = (signed char)22;
signed char var_18 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
