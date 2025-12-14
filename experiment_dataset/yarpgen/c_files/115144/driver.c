#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)75;
signed char var_6 = (signed char)14;
signed char var_16 = (signed char)-38;
signed char var_17 = (signed char)-53;
int zero = 0;
signed char var_18 = (signed char)87;
signed char var_19 = (signed char)-33;
signed char var_20 = (signed char)-49;
signed char var_21 = (signed char)-72;
signed char var_22 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
