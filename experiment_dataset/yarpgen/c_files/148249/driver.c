#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)87;
signed char var_13 = (signed char)9;
signed char var_14 = (signed char)-58;
signed char var_15 = (signed char)74;
signed char var_17 = (signed char)-83;
int zero = 0;
signed char var_18 = (signed char)59;
signed char var_19 = (signed char)83;
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
