#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
unsigned short var_1 = (unsigned short)61798;
unsigned char var_6 = (unsigned char)27;
unsigned char var_7 = (unsigned char)229;
signed char var_8 = (signed char)-13;
unsigned short var_9 = (unsigned short)5628;
unsigned char var_10 = (unsigned char)249;
signed char var_12 = (signed char)-83;
unsigned char var_14 = (unsigned char)60;
signed char var_15 = (signed char)-40;
int zero = 0;
signed char var_16 = (signed char)113;
signed char var_17 = (signed char)39;
unsigned short var_18 = (unsigned short)59409;
unsigned char var_19 = (unsigned char)197;
signed char var_20 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
