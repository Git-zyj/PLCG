#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1895358696U;
unsigned long long int var_3 = 6647105234299224758ULL;
unsigned long long int var_6 = 9586030145713170978ULL;
signed char var_7 = (signed char)50;
unsigned int var_8 = 2017770744U;
unsigned char var_9 = (unsigned char)45;
long long int var_10 = -6485588343439210289LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1258134021U;
long long int var_14 = -2639020373494059929LL;
unsigned char var_16 = (unsigned char)162;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)124;
unsigned short var_20 = (unsigned short)47332;
unsigned long long int var_21 = 4415791342194245226ULL;
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
