#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
signed char var_1 = (signed char)79;
long long int var_2 = -5115025606719675056LL;
signed char var_6 = (signed char)119;
short var_12 = (short)-27081;
int var_13 = -911320204;
unsigned int var_17 = 2210480346U;
unsigned char var_19 = (unsigned char)184;
int zero = 0;
unsigned short var_20 = (unsigned short)49957;
short var_21 = (short)16140;
unsigned char var_22 = (unsigned char)1;
void init() {
}

void checksum() {
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
