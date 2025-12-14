#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)75;
signed char var_3 = (signed char)-74;
signed char var_13 = (signed char)109;
int zero = 0;
signed char var_15 = (signed char)48;
signed char var_16 = (signed char)-126;
signed char var_17 = (signed char)126;
void init() {
}

void checksum() {
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
