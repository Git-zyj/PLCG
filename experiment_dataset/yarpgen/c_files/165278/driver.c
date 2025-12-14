#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 372762715611799817ULL;
signed char var_2 = (signed char)32;
unsigned short var_3 = (unsigned short)36351;
unsigned short var_4 = (unsigned short)49573;
unsigned long long int var_5 = 7159932348460538092ULL;
unsigned long long int var_7 = 15395666882956494362ULL;
long long int var_8 = 5437462213058086521LL;
unsigned char var_9 = (unsigned char)141;
long long int var_10 = -7884169250249662591LL;
int zero = 0;
unsigned int var_11 = 55800540U;
short var_12 = (short)-7463;
long long int var_13 = 7190953425641302893LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
