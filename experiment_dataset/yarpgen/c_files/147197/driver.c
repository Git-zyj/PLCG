#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
signed char var_3 = (signed char)-31;
signed char var_6 = (signed char)-117;
signed char var_9 = (signed char)-46;
signed char var_10 = (signed char)-41;
signed char var_12 = (signed char)-28;
int zero = 0;
signed char var_14 = (signed char)90;
signed char var_15 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
