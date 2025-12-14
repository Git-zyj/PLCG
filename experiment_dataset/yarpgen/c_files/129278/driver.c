#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1212138961U;
short var_2 = (short)7721;
short var_5 = (short)-9394;
short var_7 = (short)3826;
unsigned long long int var_9 = 9226194998051633317ULL;
signed char var_10 = (signed char)86;
int zero = 0;
unsigned int var_11 = 2874055376U;
unsigned long long int var_12 = 1924064286988228196ULL;
unsigned short var_13 = (unsigned short)8686;
void init() {
}

void checksum() {
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
