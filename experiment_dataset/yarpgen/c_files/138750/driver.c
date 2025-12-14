#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 991905346U;
signed char var_2 = (signed char)-114;
signed char var_4 = (signed char)-89;
short var_7 = (short)1186;
unsigned int var_8 = 229233388U;
int zero = 0;
unsigned short var_10 = (unsigned short)34236;
unsigned long long int var_11 = 5715280696261177371ULL;
unsigned int var_12 = 2192590172U;
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
