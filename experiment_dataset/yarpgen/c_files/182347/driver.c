#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6382;
long long int var_2 = 9104031942033657227LL;
_Bool var_3 = (_Bool)1;
short var_10 = (short)-7429;
long long int var_12 = -4946559312347586665LL;
unsigned short var_14 = (unsigned short)15020;
unsigned int var_15 = 4154527243U;
int zero = 0;
short var_19 = (short)-26148;
unsigned int var_20 = 859260749U;
unsigned int var_21 = 3309368018U;
long long int var_22 = 6898086423839380028LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
