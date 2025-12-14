#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)14931;
unsigned char var_4 = (unsigned char)233;
short var_5 = (short)30878;
int var_6 = -2067410666;
_Bool var_7 = (_Bool)0;
short var_8 = (short)9250;
unsigned int var_9 = 3131052550U;
_Bool var_10 = (_Bool)0;
int var_12 = 1463248911;
unsigned char var_13 = (unsigned char)9;
int var_15 = -956973893;
int zero = 0;
signed char var_18 = (signed char)-70;
int var_19 = 1051532677;
unsigned long long int var_20 = 15144139627562740188ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
