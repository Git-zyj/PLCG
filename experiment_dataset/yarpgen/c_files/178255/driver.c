#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-42;
signed char var_8 = (signed char)92;
signed char var_9 = (signed char)-68;
signed char var_13 = (signed char)58;
int zero = 0;
signed char var_20 = (signed char)-18;
signed char var_21 = (signed char)35;
void init() {
}

void checksum() {
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
