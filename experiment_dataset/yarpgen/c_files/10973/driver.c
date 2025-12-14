#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)27;
unsigned short var_11 = (unsigned short)176;
int zero = 0;
int var_13 = -816999042;
unsigned long long int var_14 = 13619495436903490521ULL;
unsigned int var_15 = 2222749440U;
long long int var_16 = -521379544687087031LL;
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
