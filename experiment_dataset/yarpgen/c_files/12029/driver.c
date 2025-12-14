#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned long long int var_2 = 10490476352344460842ULL;
unsigned char var_3 = (unsigned char)239;
unsigned char var_4 = (unsigned char)60;
int var_7 = -1865660967;
unsigned long long int var_9 = 4727709475709396958ULL;
int var_11 = 2135969288;
unsigned char var_13 = (unsigned char)189;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 2715411618U;
int zero = 0;
long long int var_19 = 6426219441833430530LL;
short var_20 = (short)-8880;
int var_21 = -520156550;
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
