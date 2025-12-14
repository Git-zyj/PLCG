#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10487;
long long int var_1 = 109111853426455126LL;
unsigned char var_2 = (unsigned char)109;
unsigned short var_6 = (unsigned short)57380;
int var_8 = 712585642;
unsigned long long int var_9 = 9017333366971878903ULL;
int zero = 0;
unsigned int var_10 = 1192574566U;
short var_11 = (short)-17080;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
