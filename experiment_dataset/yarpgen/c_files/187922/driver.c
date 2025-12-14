#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59789;
unsigned short var_1 = (unsigned short)30589;
unsigned int var_2 = 299353362U;
unsigned char var_4 = (unsigned char)211;
int var_5 = 304805352;
signed char var_8 = (signed char)106;
unsigned char var_9 = (unsigned char)19;
signed char var_10 = (signed char)-1;
signed char var_11 = (signed char)8;
int var_13 = 1307445813;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -83898161;
unsigned long long int var_16 = 5353930454012471821ULL;
int var_17 = -1961976795;
int var_18 = -1825501010;
unsigned char var_19 = (unsigned char)93;
unsigned int var_20 = 3390285425U;
short var_21 = (short)13632;
short var_22 = (short)-27860;
short var_23 = (short)17806;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 11451601303529666496ULL;
unsigned int var_26 = 2702028029U;
int arr_3 [19] ;
int arr_13 [14] [14] [14] ;
_Bool arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1578687333;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 751266469 : -1062605345;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
