#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13174879439880089206ULL;
unsigned short var_1 = (unsigned short)46093;
unsigned long long int var_2 = 17429833139412310203ULL;
long long int var_3 = 2065822717596182632LL;
unsigned int var_4 = 4076417979U;
long long int var_5 = -3359515895027671225LL;
int var_6 = 1420999233;
long long int var_7 = -8520472210337808859LL;
long long int var_8 = -4577620355699776875LL;
unsigned long long int var_9 = 12044300239213286417ULL;
unsigned short var_10 = (unsigned short)25256;
int zero = 0;
long long int var_11 = 4882550777687155222LL;
short var_12 = (short)26912;
unsigned long long int var_13 = 4226860487598229323ULL;
short var_14 = (short)-12226;
long long int var_15 = -7820706669890244898LL;
unsigned char var_16 = (unsigned char)150;
unsigned long long int var_17 = 17854112848606538897ULL;
long long int var_18 = -4550505820213319065LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-94;
unsigned int var_21 = 3630406678U;
unsigned long long int var_22 = 7890369971815046409ULL;
long long int var_23 = 7950578972439782562LL;
unsigned long long int var_24 = 7625367564642670794ULL;
_Bool var_25 = (_Bool)1;
int var_26 = 87989269;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)28;
unsigned long long int var_29 = 12225569691159630543ULL;
unsigned int var_30 = 3372554740U;
long long int var_31 = -2654579734273907202LL;
unsigned short var_32 = (unsigned short)62753;
unsigned short var_33 = (unsigned short)28270;
long long int var_34 = -8699207988465615407LL;
unsigned short var_35 = (unsigned short)48250;
_Bool var_36 = (_Bool)1;
unsigned short var_37 = (unsigned short)57865;
long long int var_38 = -2785614665231781311LL;
unsigned long long int var_39 = 4741145509434476001ULL;
unsigned short var_40 = (unsigned short)21762;
unsigned char arr_0 [16] [16] ;
_Bool arr_4 [14] [14] ;
_Bool arr_5 [14] ;
long long int arr_6 [14] [14] [14] ;
_Bool arr_7 [14] [14] ;
unsigned long long int arr_8 [14] [14] [14] ;
unsigned int arr_10 [14] [14] ;
unsigned short arr_11 [14] [14] [14] ;
short arr_22 [14] ;
int arr_36 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2768231201650374088LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 16916881949850306432ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 981378588U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)4064;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (short)23814;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_36 [i_0] = -98520637;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
