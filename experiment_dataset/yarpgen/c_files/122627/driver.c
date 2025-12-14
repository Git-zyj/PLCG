#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-50;
signed char var_5 = (signed char)-33;
unsigned long long int var_6 = 12722193038366211231ULL;
int zero = 0;
signed char var_10 = (signed char)42;
unsigned int var_11 = 1902776286U;
unsigned int var_12 = 2649394884U;
unsigned long long int var_13 = 9336365044440919384ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
