#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3779;
unsigned short var_7 = (unsigned short)59547;
int var_11 = 1923332165;
unsigned char var_13 = (unsigned char)190;
unsigned short var_16 = (unsigned short)40611;
int zero = 0;
unsigned long long int var_17 = 18008371592722294660ULL;
unsigned long long int var_18 = 4369927795196746542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
