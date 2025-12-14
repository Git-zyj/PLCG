#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40554;
unsigned long long int var_2 = 3268807896623302575ULL;
unsigned short var_3 = (unsigned short)17567;
unsigned char var_5 = (unsigned char)67;
int var_6 = 5810193;
int var_9 = 1593949433;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 7486551887210548578ULL;
long long int var_12 = -6109877266593545891LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)54426;
unsigned int var_15 = 1837598768U;
unsigned char var_16 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
