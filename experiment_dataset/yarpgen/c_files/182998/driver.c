#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1361518393U;
unsigned int var_2 = 3759551501U;
unsigned char var_6 = (unsigned char)62;
unsigned long long int var_7 = 3505340248604978431ULL;
int var_8 = 436605360;
unsigned int var_11 = 1523566835U;
unsigned short var_13 = (unsigned short)32931;
unsigned short var_14 = (unsigned short)49636;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2364628666U;
signed char var_17 = (signed char)49;
unsigned char var_18 = (unsigned char)38;
unsigned char var_19 = (unsigned char)7;
signed char var_20 = (signed char)-7;
int var_21 = -1009957254;
unsigned char arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)22;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
