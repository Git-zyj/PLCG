#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2962079675U;
int var_5 = -1077869120;
unsigned long long int var_6 = 3128780522728610401ULL;
short var_8 = (short)19284;
unsigned char var_9 = (unsigned char)155;
unsigned int var_11 = 93085045U;
int zero = 0;
int var_15 = 750556626;
_Bool var_16 = (_Bool)0;
int var_17 = -2115194675;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
