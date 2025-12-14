#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7263241646168013902LL;
signed char var_2 = (signed char)-82;
unsigned int var_3 = 3235302952U;
unsigned char var_5 = (unsigned char)241;
unsigned char var_7 = (unsigned char)95;
unsigned long long int var_8 = 7420437758400470172ULL;
signed char var_9 = (signed char)-123;
int zero = 0;
unsigned int var_11 = 2668531318U;
unsigned int var_12 = 4009083693U;
unsigned short var_13 = (unsigned short)61914;
short var_14 = (short)12875;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
