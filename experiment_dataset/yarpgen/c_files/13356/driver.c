#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
signed char var_8 = (signed char)13;
signed char var_11 = (signed char)-101;
signed char var_13 = (signed char)7;
int zero = 0;
signed char var_17 = (signed char)31;
signed char var_18 = (signed char)36;
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
