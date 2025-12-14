#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
unsigned char var_3 = (unsigned char)35;
unsigned char var_5 = (unsigned char)25;
unsigned int var_13 = 2644671096U;
unsigned char var_15 = (unsigned char)19;
unsigned long long int var_16 = 13727181854260148883ULL;
unsigned long long int var_17 = 10846792485618499169ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)36194;
int var_20 = 1148319313;
unsigned long long int var_21 = 423973818101332016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
