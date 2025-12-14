#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28908;
long long int var_2 = 1498874131491096198LL;
signed char var_3 = (signed char)-14;
short var_4 = (short)-24142;
signed char var_5 = (signed char)106;
short var_7 = (short)8245;
short var_8 = (short)7098;
int zero = 0;
long long int var_10 = -750093154841752966LL;
long long int var_11 = 6907861132439261350LL;
unsigned int var_12 = 3789213407U;
unsigned short var_13 = (unsigned short)60261;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
