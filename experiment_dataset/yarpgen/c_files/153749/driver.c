#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-406;
unsigned int var_7 = 1558724863U;
unsigned int var_9 = 497522198U;
unsigned short var_12 = (unsigned short)28390;
unsigned short var_15 = (unsigned short)63835;
short var_17 = (short)-8417;
int zero = 0;
unsigned long long int var_18 = 6508316977574297247ULL;
unsigned long long int var_19 = 13803568503484952860ULL;
short var_20 = (short)-6192;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4007722177U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
