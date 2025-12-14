#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48409;
unsigned int var_6 = 2112676285U;
int var_12 = -631997150;
unsigned short var_13 = (unsigned short)24519;
long long int var_15 = -7624936845775927542LL;
long long int var_16 = -5420257057889200333LL;
long long int var_19 = -6752215181539643532LL;
int zero = 0;
unsigned short var_20 = (unsigned short)36327;
short var_21 = (short)7832;
unsigned short var_22 = (unsigned short)50785;
unsigned short var_23 = (unsigned short)65514;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
