#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)64;
unsigned char var_4 = (unsigned char)212;
unsigned long long int var_5 = 13838392023184563026ULL;
signed char var_6 = (signed char)-64;
int zero = 0;
unsigned long long int var_10 = 13795153354035382945ULL;
unsigned char var_11 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
