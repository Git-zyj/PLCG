#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 847901445489501235ULL;
unsigned long long int var_1 = 2035274345357879381ULL;
int var_2 = 778151944;
unsigned short var_3 = (unsigned short)20478;
unsigned int var_5 = 3323287561U;
int var_6 = -9750338;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)189;
int zero = 0;
unsigned short var_18 = (unsigned short)58547;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)238;
long long int var_22 = 3627240730367706354LL;
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
