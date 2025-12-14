#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2033;
signed char var_6 = (signed char)-31;
long long int var_8 = 8664056514410260425LL;
unsigned long long int var_10 = 16324325105241318363ULL;
unsigned char var_11 = (unsigned char)223;
int zero = 0;
long long int var_15 = -6887210576997683067LL;
unsigned char var_16 = (unsigned char)106;
unsigned int var_17 = 3052419195U;
unsigned short var_18 = (unsigned short)64019;
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
