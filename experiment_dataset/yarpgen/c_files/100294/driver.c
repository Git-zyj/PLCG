#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2503698698U;
int var_2 = 1990839835;
short var_3 = (short)-1701;
signed char var_5 = (signed char)38;
short var_10 = (short)-17952;
int zero = 0;
signed char var_11 = (signed char)104;
unsigned char var_12 = (unsigned char)102;
unsigned long long int var_13 = 3024481733578052752ULL;
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
