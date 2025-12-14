#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -272791610;
unsigned short var_1 = (unsigned short)46695;
unsigned char var_2 = (unsigned char)1;
unsigned int var_5 = 4001513861U;
_Bool var_6 = (_Bool)1;
int var_7 = -532177614;
int var_9 = 1466905544;
unsigned char var_12 = (unsigned char)226;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 15117730428210932497ULL;
unsigned short var_18 = (unsigned short)21010;
unsigned short var_19 = (unsigned short)1779;
unsigned int var_20 = 2680654033U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
