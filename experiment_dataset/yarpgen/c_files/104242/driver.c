#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54843;
long long int var_7 = 7746927916034362518LL;
short var_9 = (short)1153;
unsigned int var_11 = 1461973977U;
unsigned long long int var_12 = 8444568170533449933ULL;
unsigned char var_16 = (unsigned char)143;
unsigned short var_17 = (unsigned short)60416;
int zero = 0;
long long int var_19 = 1599849158784766279LL;
unsigned short var_20 = (unsigned short)13463;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
