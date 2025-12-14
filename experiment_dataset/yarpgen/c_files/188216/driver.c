#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
signed char var_1 = (signed char)46;
signed char var_3 = (signed char)0;
signed char var_4 = (signed char)-67;
signed char var_6 = (signed char)-38;
signed char var_8 = (signed char)47;
signed char var_10 = (signed char)-64;
signed char var_11 = (signed char)-81;
int zero = 0;
signed char var_12 = (signed char)21;
signed char var_13 = (signed char)-114;
signed char var_14 = (signed char)-108;
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
