#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3928116692U;
unsigned short var_7 = (unsigned short)24457;
short var_8 = (short)4253;
signed char var_9 = (signed char)-84;
int var_11 = 1898711772;
short var_12 = (short)389;
unsigned long long int var_13 = 11516967141912193363ULL;
short var_14 = (short)-28436;
unsigned char var_15 = (unsigned char)247;
unsigned long long int var_17 = 9759408092886569757ULL;
int zero = 0;
short var_19 = (short)20004;
signed char var_20 = (signed char)-60;
signed char var_21 = (signed char)7;
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
