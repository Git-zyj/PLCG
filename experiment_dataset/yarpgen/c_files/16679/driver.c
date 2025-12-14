#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6106453735715423833ULL;
signed char var_2 = (signed char)17;
unsigned long long int var_5 = 5034322373823210350ULL;
unsigned long long int var_6 = 13324250773732396222ULL;
unsigned char var_12 = (unsigned char)191;
unsigned int var_16 = 933483206U;
int zero = 0;
unsigned int var_20 = 286960897U;
unsigned short var_21 = (unsigned short)51693;
unsigned long long int var_22 = 16473932703881126199ULL;
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
