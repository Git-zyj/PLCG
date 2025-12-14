#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -663852741;
unsigned short var_2 = (unsigned short)18823;
long long int var_3 = -3053540193741403285LL;
unsigned int var_4 = 2564287962U;
short var_6 = (short)4335;
unsigned short var_7 = (unsigned short)62084;
unsigned char var_10 = (unsigned char)238;
int zero = 0;
long long int var_17 = -3932996814503819325LL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)11178;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
