#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 63811847U;
signed char var_3 = (signed char)47;
unsigned short var_4 = (unsigned short)39050;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)16;
unsigned char var_11 = (unsigned char)178;
unsigned char var_12 = (unsigned char)26;
short var_13 = (short)-29714;
int zero = 0;
unsigned long long int var_16 = 13141212507406083163ULL;
unsigned char var_17 = (unsigned char)18;
unsigned char var_18 = (unsigned char)191;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)157;
signed char var_21 = (signed char)-99;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)51613;
long long int var_24 = 1723663323560447393LL;
unsigned int var_25 = 4222826484U;
unsigned short var_26 = (unsigned short)64575;
signed char var_27 = (signed char)127;
unsigned long long int var_28 = 15911360106144651866ULL;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 6283627537086525579ULL;
unsigned char var_32 = (unsigned char)191;
int arr_1 [24] [24] ;
unsigned short arr_6 [24] ;
long long int arr_7 [24] [24] [24] [24] ;
unsigned long long int arr_8 [24] [24] [24] [24] ;
unsigned int arr_25 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -925656130 : -1434812917;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)33059;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -5712372410202682221LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3985654022794293976ULL : 14983926666625271501ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 236446407U;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
