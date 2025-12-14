#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4780230871589297486LL;
unsigned short var_1 = (unsigned short)46824;
unsigned char var_2 = (unsigned char)33;
unsigned long long int var_4 = 2393218715629762666ULL;
unsigned short var_5 = (unsigned short)15710;
short var_6 = (short)-19606;
int var_7 = -1519850173;
short var_8 = (short)-28246;
short var_9 = (short)1962;
int zero = 0;
long long int var_10 = 3037259270721498972LL;
short var_11 = (short)-25208;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int var_14 = -1135602587;
unsigned short var_15 = (unsigned short)21292;
unsigned short var_16 = (unsigned short)62045;
unsigned short var_17 = (unsigned short)25127;
signed char arr_0 [18] [18] ;
unsigned char arr_3 [18] [18] ;
_Bool arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
