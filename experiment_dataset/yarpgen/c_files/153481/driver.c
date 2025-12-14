#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 631581384486459303ULL;
short var_1 = (short)11219;
int var_3 = -169541338;
signed char var_4 = (signed char)-124;
unsigned int var_6 = 3859206217U;
unsigned int var_7 = 2380240167U;
long long int var_8 = 3512049672320403199LL;
long long int var_9 = -260036739609983838LL;
unsigned char var_10 = (unsigned char)13;
int zero = 0;
int var_11 = -809536188;
unsigned short var_12 = (unsigned short)55901;
unsigned short var_13 = (unsigned short)3711;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
