#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
signed char var_2 = (signed char)-91;
signed char var_4 = (signed char)-123;
signed char var_5 = (signed char)93;
unsigned int var_10 = 3930320271U;
int zero = 0;
signed char var_11 = (signed char)-86;
signed char var_12 = (signed char)-111;
unsigned int var_13 = 1236116682U;
signed char var_14 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
