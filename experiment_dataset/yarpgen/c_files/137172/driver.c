#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5318212246086178764LL;
unsigned long long int var_2 = 6866834424026748197ULL;
unsigned char var_3 = (unsigned char)158;
short var_4 = (short)-10252;
int var_9 = -69632442;
int var_11 = -1065221679;
short var_12 = (short)21414;
unsigned int var_14 = 4251102502U;
unsigned char var_15 = (unsigned char)95;
unsigned int var_16 = 193547208U;
unsigned int var_17 = 1935648499U;
int zero = 0;
long long int var_20 = 245736349938897869LL;
unsigned char var_21 = (unsigned char)248;
unsigned short var_22 = (unsigned short)9283;
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
