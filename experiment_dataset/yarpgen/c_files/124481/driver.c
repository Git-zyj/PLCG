#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24543;
unsigned char var_2 = (unsigned char)41;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 14800941068865132377ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2200366089U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1768941426U;
unsigned short var_12 = (unsigned short)703;
int zero = 0;
long long int var_13 = -1632008121167725400LL;
long long int var_14 = 1921685492640935717LL;
signed char var_15 = (signed char)-29;
int var_16 = -511524840;
signed char var_17 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
