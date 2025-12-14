#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)-121;
signed char var_15 = (signed char)97;
signed char var_16 = (signed char)55;
int zero = 0;
signed char var_19 = (signed char)-33;
signed char var_20 = (signed char)-46;
signed char var_21 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
