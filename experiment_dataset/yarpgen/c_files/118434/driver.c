#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17098656928611633996ULL;
unsigned char var_2 = (unsigned char)97;
short var_8 = (short)-31410;
unsigned char var_9 = (unsigned char)224;
short var_10 = (short)-28827;
long long int var_11 = 1888139621896996909LL;
int zero = 0;
unsigned char var_13 = (unsigned char)45;
short var_14 = (short)-2337;
unsigned char var_15 = (unsigned char)135;
long long int var_16 = -7956878966087526778LL;
unsigned long long int var_17 = 10172435852116177048ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
