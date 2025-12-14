#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2347883454991508485ULL;
unsigned char var_3 = (unsigned char)42;
signed char var_5 = (signed char)-23;
long long int var_7 = -4059820445201468665LL;
unsigned char var_8 = (unsigned char)199;
unsigned short var_10 = (unsigned short)57986;
int zero = 0;
short var_13 = (short)16246;
short var_14 = (short)29303;
unsigned long long int var_15 = 109054290201431701ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
