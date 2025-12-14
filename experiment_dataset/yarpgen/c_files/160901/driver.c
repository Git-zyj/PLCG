#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60433;
unsigned long long int var_3 = 18086226695425419694ULL;
int var_5 = -115660425;
signed char var_8 = (signed char)-113;
int var_10 = -2119550508;
signed char var_12 = (signed char)49;
int zero = 0;
int var_13 = 242880046;
long long int var_14 = 2694325666583100832LL;
short var_15 = (short)-15012;
long long int var_16 = 5611187768934069876LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
