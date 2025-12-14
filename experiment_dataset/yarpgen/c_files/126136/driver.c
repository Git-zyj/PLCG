#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 448268737U;
unsigned char var_5 = (unsigned char)211;
int var_6 = -802974666;
unsigned char var_9 = (unsigned char)2;
signed char var_12 = (signed char)-56;
int zero = 0;
unsigned int var_16 = 1811706940U;
unsigned int var_17 = 3005848048U;
unsigned char var_18 = (unsigned char)237;
unsigned char var_19 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
