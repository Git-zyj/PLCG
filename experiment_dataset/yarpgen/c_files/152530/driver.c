#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
signed char var_2 = (signed char)-97;
unsigned char var_4 = (unsigned char)140;
unsigned char var_5 = (unsigned char)172;
signed char var_7 = (signed char)-112;
unsigned short var_8 = (unsigned short)31985;
unsigned short var_10 = (unsigned short)42823;
unsigned short var_12 = (unsigned short)16488;
signed char var_13 = (signed char)-17;
unsigned long long int var_14 = 17357881274770222679ULL;
int zero = 0;
unsigned int var_15 = 2720699343U;
unsigned long long int var_16 = 8991603725169300320ULL;
unsigned long long int var_17 = 2355858757141488232ULL;
unsigned long long int var_18 = 660101033130958758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
