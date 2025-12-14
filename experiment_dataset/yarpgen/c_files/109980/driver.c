#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11475622811806947051ULL;
unsigned char var_9 = (unsigned char)64;
unsigned char var_10 = (unsigned char)233;
long long int var_13 = -2211941713111696631LL;
unsigned int var_18 = 3772310394U;
int zero = 0;
int var_19 = 956318515;
unsigned char var_20 = (unsigned char)175;
unsigned short var_21 = (unsigned short)10084;
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
