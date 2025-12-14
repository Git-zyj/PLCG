#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned short var_1 = (unsigned short)28329;
signed char var_2 = (signed char)24;
unsigned int var_3 = 820542612U;
short var_5 = (short)18463;
int zero = 0;
int var_12 = 2024400105;
unsigned long long int var_13 = 1043124213850550502ULL;
void init() {
}

void checksum() {
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
