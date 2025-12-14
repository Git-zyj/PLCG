#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
unsigned int var_2 = 2699631649U;
unsigned int var_3 = 350520986U;
unsigned char var_7 = (unsigned char)67;
unsigned int var_13 = 4189737841U;
unsigned short var_15 = (unsigned short)21417;
int var_16 = 851769981;
int zero = 0;
int var_17 = 872739274;
unsigned short var_18 = (unsigned short)30163;
int var_19 = -1066937414;
short var_20 = (short)30515;
unsigned int var_21 = 608577969U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
