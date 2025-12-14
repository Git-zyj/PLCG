#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
signed char var_2 = (signed char)49;
signed char var_6 = (signed char)-61;
signed char var_11 = (signed char)76;
int zero = 0;
signed char var_12 = (signed char)-63;
signed char var_13 = (signed char)119;
signed char var_14 = (signed char)44;
signed char var_15 = (signed char)-21;
signed char var_16 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
