#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15127864900536732069ULL;
int var_2 = 951610169;
int var_3 = -2127536596;
unsigned char var_8 = (unsigned char)197;
unsigned long long int var_9 = 6900717930173907039ULL;
unsigned long long int var_10 = 16522940404220297332ULL;
unsigned short var_14 = (unsigned short)43035;
unsigned long long int var_15 = 13562793209974389498ULL;
int zero = 0;
unsigned long long int var_17 = 17341566292612188576ULL;
unsigned short var_18 = (unsigned short)36016;
unsigned short var_19 = (unsigned short)51216;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
