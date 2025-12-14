#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 225087942U;
long long int var_2 = -5243349555220674048LL;
long long int var_6 = 3714820214414948660LL;
unsigned int var_7 = 2782208912U;
signed char var_8 = (signed char)12;
unsigned short var_9 = (unsigned short)27563;
int var_10 = -1920556394;
unsigned short var_12 = (unsigned short)50556;
unsigned int var_15 = 167585041U;
short var_16 = (short)5497;
int zero = 0;
unsigned short var_18 = (unsigned short)12093;
int var_19 = 282724001;
signed char var_20 = (signed char)-108;
unsigned short var_21 = (unsigned short)2001;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
