#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2762671972510689427LL;
unsigned int var_3 = 3875254814U;
signed char var_5 = (signed char)29;
unsigned char var_9 = (unsigned char)147;
signed char var_10 = (signed char)-70;
unsigned long long int var_11 = 7743704582406252483ULL;
short var_17 = (short)-20137;
int zero = 0;
unsigned int var_18 = 2717955477U;
signed char var_19 = (signed char)-32;
unsigned short var_20 = (unsigned short)44710;
short var_21 = (short)-8798;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
