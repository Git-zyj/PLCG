#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59804;
signed char var_2 = (signed char)60;
unsigned long long int var_4 = 6261363114147587900ULL;
signed char var_5 = (signed char)-36;
unsigned long long int var_6 = 11605890103786964988ULL;
int var_8 = -1627453137;
unsigned long long int var_9 = 13460872547500295631ULL;
signed char var_10 = (signed char)-118;
short var_11 = (short)-29735;
long long int var_12 = -1536583265393661051LL;
unsigned char var_13 = (unsigned char)28;
unsigned long long int var_16 = 15892425766100803886ULL;
unsigned long long int var_17 = 15249707797430861628ULL;
int zero = 0;
signed char var_19 = (signed char)-124;
signed char var_20 = (signed char)95;
unsigned char var_21 = (unsigned char)206;
unsigned char var_22 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
