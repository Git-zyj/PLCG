#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17047;
unsigned long long int var_2 = 15010198723782017212ULL;
unsigned char var_3 = (unsigned char)211;
short var_4 = (short)20859;
unsigned char var_10 = (unsigned char)60;
unsigned char var_11 = (unsigned char)246;
unsigned short var_13 = (unsigned short)15634;
unsigned long long int var_15 = 16042370392866240447ULL;
long long int var_16 = -6918765022304963475LL;
long long int var_17 = -2337000360541581455LL;
int zero = 0;
unsigned short var_18 = (unsigned short)59874;
long long int var_19 = -705818899625723713LL;
long long int var_20 = -6282062978956428743LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
