#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -382708808;
signed char var_10 = (signed char)-11;
int zero = 0;
unsigned char var_20 = (unsigned char)234;
unsigned long long int var_21 = 17226620404000823742ULL;
short var_22 = (short)17247;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
