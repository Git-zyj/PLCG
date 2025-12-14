#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40825;
unsigned char var_5 = (unsigned char)218;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2641575317U;
signed char var_11 = (signed char)58;
int zero = 0;
unsigned int var_12 = 3116864846U;
signed char var_13 = (signed char)110;
long long int var_14 = 5750121591234193340LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-12182;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
