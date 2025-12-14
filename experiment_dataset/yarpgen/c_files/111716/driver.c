#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)212;
unsigned short var_2 = (unsigned short)19701;
unsigned char var_3 = (unsigned char)158;
signed char var_4 = (signed char)103;
unsigned int var_5 = 2107102277U;
signed char var_6 = (signed char)125;
short var_7 = (short)-10114;
unsigned short var_9 = (unsigned short)6749;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 932691398183081890ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
