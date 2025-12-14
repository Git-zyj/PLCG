#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2068028983U;
int var_1 = 1033082408;
unsigned char var_3 = (unsigned char)241;
unsigned int var_4 = 3959805046U;
signed char var_7 = (signed char)105;
int var_8 = -661440912;
long long int var_10 = 2340331763726125418LL;
long long int var_11 = 4485216996568921521LL;
long long int var_12 = -7710190502129678401LL;
signed char var_15 = (signed char)-41;
unsigned long long int var_17 = 970276109538630187ULL;
int zero = 0;
unsigned long long int var_19 = 16819104928953441907ULL;
unsigned int var_20 = 1862094598U;
unsigned short var_21 = (unsigned short)21931;
short var_22 = (short)22161;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 622147553712090182ULL;
long long int var_25 = -149112739700851045LL;
unsigned long long int var_26 = 5936963303485562634ULL;
long long int var_27 = 3494799790619038124LL;
short arr_0 [12] ;
unsigned short arr_1 [12] [12] ;
int arr_2 [12] ;
unsigned int arr_3 [12] [12] ;
long long int arr_4 [12] [12] [12] ;
_Bool arr_5 [12] [12] [12] ;
signed char arr_6 [12] [12] [12] ;
unsigned short arr_7 [12] [12] [12] ;
long long int arr_8 [12] [12] [12] [12] [12] [12] ;
long long int arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)16615;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)38103 : (unsigned short)19616;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1180247280;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2444867307U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3668088073093529488LL : 6760044614443546007LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)24728;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -4464284350934956135LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2760116903052492135LL : -893254809660910582LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
