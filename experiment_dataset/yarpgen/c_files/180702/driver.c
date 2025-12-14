#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)478;
unsigned long long int var_7 = 858263549851144578ULL;
unsigned long long int var_9 = 9887479023383340521ULL;
int zero = 0;
unsigned int var_12 = 1471838358U;
unsigned short var_13 = (unsigned short)14354;
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
