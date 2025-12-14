#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6547717673811620404LL;
signed char var_5 = (signed char)-125;
unsigned int var_6 = 2243743309U;
unsigned char var_7 = (unsigned char)87;
unsigned long long int var_8 = 15867653807161520894ULL;
long long int var_11 = -118320125867396470LL;
unsigned short var_12 = (unsigned short)54785;
unsigned long long int var_13 = 5740074529497784422ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)132;
unsigned long long int var_15 = 7638105121795579671ULL;
unsigned int var_16 = 890795777U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
