#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 743454929U;
unsigned long long int var_3 = 5106052204266346201ULL;
unsigned int var_5 = 655185274U;
unsigned char var_7 = (unsigned char)205;
signed char var_10 = (signed char)30;
unsigned short var_11 = (unsigned short)42051;
unsigned char var_12 = (unsigned char)66;
unsigned int var_16 = 645820943U;
unsigned long long int var_17 = 14131007960391528589ULL;
int zero = 0;
signed char var_18 = (signed char)15;
unsigned char var_19 = (unsigned char)72;
unsigned int var_20 = 80063862U;
unsigned short var_21 = (unsigned short)17203;
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
