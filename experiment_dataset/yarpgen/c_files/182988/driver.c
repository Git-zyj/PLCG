#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -25272268;
unsigned int var_2 = 4062949922U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)149;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)64943;
unsigned char var_10 = (unsigned char)148;
unsigned short var_11 = (unsigned short)6417;
unsigned char var_12 = (unsigned char)119;
unsigned int var_13 = 3401447936U;
_Bool var_14 = (_Bool)1;
int var_15 = 1547126656;
int var_16 = -1445550637;
int zero = 0;
unsigned short var_17 = (unsigned short)34791;
int var_18 = -1172377341;
long long int var_19 = 7700381198491286627LL;
signed char var_20 = (signed char)-51;
signed char var_21 = (signed char)114;
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
