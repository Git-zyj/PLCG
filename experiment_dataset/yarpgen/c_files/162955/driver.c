#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24049;
long long int var_1 = 1661582411638180708LL;
unsigned char var_2 = (unsigned char)26;
int var_3 = -645843241;
short var_4 = (short)-7846;
short var_5 = (short)-20889;
unsigned int var_6 = 278242525U;
signed char var_8 = (signed char)98;
short var_9 = (short)-27455;
int var_10 = 693063229;
long long int var_11 = -8126567277049249061LL;
unsigned long long int var_12 = 15194935085743494684ULL;
int zero = 0;
unsigned long long int var_13 = 2362764777910603353ULL;
int var_14 = -898202111;
short var_15 = (short)-8545;
unsigned long long int var_16 = 9307421593984403480ULL;
unsigned long long int var_17 = 8033047586232419806ULL;
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
