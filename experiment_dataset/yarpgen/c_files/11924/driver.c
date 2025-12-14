#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11105;
unsigned long long int var_3 = 17563032348928432141ULL;
unsigned long long int var_13 = 641654192300235210ULL;
int var_16 = 1483185419;
unsigned int var_17 = 515016284U;
unsigned long long int var_18 = 16896832416060859581ULL;
unsigned short var_19 = (unsigned short)50571;
int zero = 0;
unsigned long long int var_20 = 12613365269877153875ULL;
unsigned char var_21 = (unsigned char)142;
short var_22 = (short)-19859;
unsigned int var_23 = 1073333194U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
