#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3684222524816548063ULL;
signed char var_5 = (signed char)-117;
unsigned long long int var_6 = 15951293518578723824ULL;
unsigned short var_7 = (unsigned short)21392;
unsigned char var_9 = (unsigned char)72;
unsigned short var_10 = (unsigned short)62453;
unsigned char var_12 = (unsigned char)37;
int var_13 = 194309660;
unsigned int var_16 = 1592753566U;
int zero = 0;
long long int var_17 = 4227896352981468116LL;
unsigned char var_18 = (unsigned char)60;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
