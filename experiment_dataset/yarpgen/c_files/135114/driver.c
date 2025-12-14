#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32392;
unsigned int var_2 = 1102352812U;
unsigned char var_4 = (unsigned char)171;
unsigned int var_6 = 2018452106U;
unsigned short var_7 = (unsigned short)65222;
unsigned int var_9 = 724499075U;
long long int var_10 = -724316761270547115LL;
int zero = 0;
unsigned int var_11 = 2386584395U;
long long int var_12 = -4292573154030646848LL;
int var_13 = 584120244;
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
