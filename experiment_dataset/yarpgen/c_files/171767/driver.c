#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7268;
unsigned short var_2 = (unsigned short)15791;
unsigned int var_3 = 1082981040U;
short var_4 = (short)23588;
long long int var_5 = 5290369691969288067LL;
int var_6 = -1857365880;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6497738893580127477ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)4074;
unsigned long long int var_16 = 5958896397879353039ULL;
signed char var_17 = (signed char)60;
void init() {
}

void checksum() {
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
