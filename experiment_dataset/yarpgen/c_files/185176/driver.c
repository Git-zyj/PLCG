#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
signed char var_1 = (signed char)-66;
signed char var_5 = (signed char)-110;
signed char var_6 = (signed char)-58;
signed char var_10 = (signed char)107;
signed char var_13 = (signed char)115;
signed char var_15 = (signed char)-123;
signed char var_16 = (signed char)-96;
int zero = 0;
signed char var_19 = (signed char)90;
signed char var_20 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
