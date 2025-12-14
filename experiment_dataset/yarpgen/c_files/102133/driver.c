#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
unsigned long long int var_2 = 14224148893785304238ULL;
int var_3 = 980670844;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 9834610047740557138ULL;
signed char var_6 = (signed char)-90;
unsigned short var_7 = (unsigned short)31518;
short var_9 = (short)-12852;
int zero = 0;
long long int var_10 = -4773898650080060304LL;
unsigned int var_11 = 2839813759U;
unsigned int var_12 = 4090510443U;
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
