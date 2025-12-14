#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)222;
unsigned char var_2 = (unsigned char)107;
int var_4 = 971017559;
unsigned long long int var_5 = 2706808220284366475ULL;
unsigned int var_6 = 2860919191U;
int var_7 = -525139313;
signed char var_8 = (signed char)4;
signed char var_9 = (signed char)-20;
signed char var_10 = (signed char)-99;
short var_11 = (short)-20196;
int var_14 = -1596885630;
unsigned long long int var_16 = 10601273786527573624ULL;
unsigned int var_18 = 1919281120U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)29043;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)191;
long long int var_23 = 1947325510415045117LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
