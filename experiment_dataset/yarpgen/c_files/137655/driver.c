#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12573838164984103700ULL;
unsigned int var_5 = 4100699500U;
unsigned int var_11 = 2151076747U;
unsigned long long int var_13 = 10679827175586122598ULL;
int zero = 0;
signed char var_14 = (signed char)-12;
short var_15 = (short)-16665;
signed char var_16 = (signed char)-15;
void init() {
}

void checksum() {
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
