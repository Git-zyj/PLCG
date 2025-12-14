#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)47238;
unsigned long long int var_10 = 14018477643963837383ULL;
unsigned char var_12 = (unsigned char)117;
signed char var_14 = (signed char)84;
unsigned int var_18 = 829672735U;
int zero = 0;
unsigned short var_19 = (unsigned short)50378;
long long int var_20 = -6889565370200638572LL;
long long int var_21 = 851168460308235830LL;
void init() {
}

void checksum() {
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
