#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2237048456U;
unsigned long long int var_2 = 940593617716115086ULL;
unsigned char var_3 = (unsigned char)35;
unsigned long long int var_4 = 10741089189151600921ULL;
unsigned long long int var_5 = 10361984873681954216ULL;
unsigned short var_6 = (unsigned short)11812;
unsigned long long int var_7 = 928077901830813238ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)227;
unsigned int var_11 = 1681592474U;
int zero = 0;
unsigned short var_12 = (unsigned short)49080;
unsigned short var_13 = (unsigned short)22013;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
