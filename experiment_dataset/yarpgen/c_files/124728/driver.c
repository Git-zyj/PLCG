#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
signed char var_6 = (signed char)-37;
signed char var_7 = (signed char)-99;
signed char var_9 = (signed char)-91;
signed char var_10 = (signed char)-20;
signed char var_11 = (signed char)-91;
signed char var_12 = (signed char)25;
signed char var_13 = (signed char)-34;
int zero = 0;
signed char var_14 = (signed char)-49;
signed char var_15 = (signed char)-47;
signed char var_16 = (signed char)12;
signed char var_17 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
