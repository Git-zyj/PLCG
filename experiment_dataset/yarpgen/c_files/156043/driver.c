#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11661;
unsigned short var_5 = (unsigned short)48728;
signed char var_8 = (signed char)-123;
unsigned int var_11 = 622644344U;
unsigned long long int var_12 = 7079677686007375058ULL;
int zero = 0;
unsigned long long int var_18 = 8112833576472697724ULL;
unsigned int var_19 = 221800020U;
short var_20 = (short)-23968;
short var_21 = (short)-30967;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
