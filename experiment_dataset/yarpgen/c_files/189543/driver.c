#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1070354816;
short var_3 = (short)-14224;
signed char var_4 = (signed char)14;
unsigned int var_8 = 4274015204U;
int zero = 0;
unsigned long long int var_10 = 1498248995571951438ULL;
unsigned char var_11 = (unsigned char)148;
unsigned long long int var_12 = 16719461330735349891ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
