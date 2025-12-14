#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 542538113;
unsigned short var_2 = (unsigned short)24747;
unsigned long long int var_7 = 12570420905325565058ULL;
unsigned short var_8 = (unsigned short)28094;
unsigned int var_9 = 1827940378U;
int zero = 0;
unsigned short var_18 = (unsigned short)48801;
signed char var_19 = (signed char)-121;
unsigned int var_20 = 1411979362U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
