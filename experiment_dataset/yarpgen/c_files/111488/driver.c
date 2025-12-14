#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-108;
signed char var_3 = (signed char)123;
signed char var_4 = (signed char)-109;
signed char var_7 = (signed char)-7;
signed char var_13 = (signed char)62;
signed char var_15 = (signed char)-92;
int zero = 0;
signed char var_18 = (signed char)13;
signed char var_19 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
