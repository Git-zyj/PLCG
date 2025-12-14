#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
signed char var_1 = (signed char)34;
signed char var_3 = (signed char)-16;
signed char var_4 = (signed char)-91;
signed char var_6 = (signed char)37;
signed char var_8 = (signed char)66;
signed char var_10 = (signed char)62;
signed char var_12 = (signed char)93;
int zero = 0;
signed char var_14 = (signed char)-100;
signed char var_15 = (signed char)-46;
signed char var_16 = (signed char)60;
void init() {
}

void checksum() {
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
