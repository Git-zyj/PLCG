#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 887362854;
unsigned long long int var_1 = 2218306502563998773ULL;
unsigned long long int var_3 = 5005891407071561951ULL;
int var_4 = 1950506798;
short var_5 = (short)11894;
unsigned long long int var_6 = 7353749486299847432ULL;
unsigned long long int var_9 = 5318969179699895228ULL;
unsigned long long int var_10 = 7905233423875209477ULL;
int zero = 0;
unsigned long long int var_12 = 11273339025646977927ULL;
short var_13 = (short)13132;
long long int var_14 = -4386364154818992909LL;
unsigned int var_15 = 3794709031U;
int var_16 = 1577322217;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
