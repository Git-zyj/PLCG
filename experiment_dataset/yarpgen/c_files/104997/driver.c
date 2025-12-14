#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4212234821U;
unsigned short var_2 = (unsigned short)64965;
int var_3 = 1529480382;
signed char var_5 = (signed char)-7;
unsigned char var_6 = (unsigned char)95;
unsigned char var_9 = (unsigned char)21;
unsigned char var_13 = (unsigned char)179;
unsigned char var_14 = (unsigned char)33;
int var_16 = 684502750;
int zero = 0;
unsigned long long int var_17 = 8460476513337597724ULL;
long long int var_18 = 7405868738270118041LL;
unsigned int var_19 = 2899047925U;
long long int var_20 = -8853193502441638929LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
