#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
signed char var_1 = (signed char)67;
signed char var_6 = (signed char)-87;
signed char var_7 = (signed char)3;
signed char var_16 = (signed char)-114;
int zero = 0;
signed char var_17 = (signed char)-44;
signed char var_18 = (signed char)45;
signed char var_19 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
