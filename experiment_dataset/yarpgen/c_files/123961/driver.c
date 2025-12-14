#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30340;
long long int var_1 = 3542761848284015785LL;
unsigned int var_2 = 961950844U;
unsigned short var_7 = (unsigned short)53409;
unsigned int var_8 = 3246271353U;
long long int var_9 = 7998344395245354722LL;
int zero = 0;
unsigned int var_10 = 3353297270U;
int var_11 = -192731538;
unsigned int var_12 = 3711909862U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
