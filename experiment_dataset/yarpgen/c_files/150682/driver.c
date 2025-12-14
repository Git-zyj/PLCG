#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
unsigned short var_2 = (unsigned short)49800;
short var_3 = (short)4988;
short var_4 = (short)24312;
long long int var_5 = 5375608284489122451LL;
unsigned int var_6 = 841504519U;
signed char var_8 = (signed char)74;
unsigned int var_9 = 606914426U;
unsigned int var_10 = 2638230753U;
int var_12 = -2046040332;
signed char var_13 = (signed char)-94;
unsigned char var_14 = (unsigned char)116;
unsigned short var_15 = (unsigned short)62107;
long long int var_16 = -7458690277785054626LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)94;
unsigned short var_19 = (unsigned short)42797;
signed char var_20 = (signed char)95;
unsigned long long int var_21 = 12208384397339412381ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
