#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)50;
_Bool var_2 = (_Bool)0;
long long int var_6 = -4188046731019079220LL;
signed char var_9 = (signed char)65;
unsigned int var_10 = 3749771568U;
unsigned long long int var_14 = 17465897623562846309ULL;
long long int var_17 = 2082458826674150248LL;
unsigned short var_19 = (unsigned short)62582;
int zero = 0;
int var_20 = 550186939;
unsigned long long int var_21 = 15809581537862708490ULL;
long long int var_22 = 5938129011121005521LL;
long long int var_23 = -7368917128270672264LL;
long long int var_24 = -3750425182226146175LL;
unsigned long long int var_25 = 11669728678294589480ULL;
long long int var_26 = 9132852168321668342LL;
long long int var_27 = 3117077622405607004LL;
unsigned short var_28 = (unsigned short)57082;
long long int var_29 = -4037366265966142470LL;
unsigned long long int var_30 = 16691068729666676744ULL;
unsigned int var_31 = 1920320651U;
unsigned char var_32 = (unsigned char)176;
unsigned short var_33 = (unsigned short)30069;
long long int var_34 = 1585505955001814439LL;
unsigned char var_35 = (unsigned char)140;
unsigned char var_36 = (unsigned char)45;
unsigned long long int arr_0 [11] [11] ;
long long int arr_1 [11] [11] ;
long long int arr_4 [11] ;
_Bool arr_8 [11] [11] [11] ;
long long int arr_9 [11] [11] [11] ;
short arr_10 [11] [11] [11] [11] ;
short arr_11 [11] [11] [11] [11] ;
unsigned long long int arr_18 [11] ;
int arr_25 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 5844488676533730435ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 907859317604102551LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -8371816069734326095LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -5551322081763278530LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-12201;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-8142;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 18033508921401574488ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1307024992 : -472744151;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
