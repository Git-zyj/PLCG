#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)107;
short var_3 = (short)-2098;
unsigned short var_5 = (unsigned short)29460;
int var_6 = -1574924840;
_Bool var_7 = (_Bool)0;
long long int var_8 = 8909246038276006596LL;
short var_9 = (short)-30587;
unsigned int var_10 = 986028078U;
int var_11 = -1969909767;
unsigned short var_12 = (unsigned short)45403;
unsigned int var_14 = 4275066791U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-15373;
unsigned char var_18 = (unsigned char)25;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 3051682720757524976ULL;
short var_21 = (short)12619;
short var_22 = (short)-25440;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
long long int var_25 = 3414818026784384735LL;
signed char var_26 = (signed char)-65;
_Bool arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
