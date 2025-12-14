#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1417826186U;
short var_1 = (short)-9345;
unsigned short var_2 = (unsigned short)54807;
signed char var_3 = (signed char)-9;
int var_4 = 236805487;
unsigned char var_5 = (unsigned char)42;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-69;
unsigned long long int var_8 = 15239968717213900668ULL;
unsigned long long int var_9 = 13048574354061864922ULL;
unsigned long long int var_10 = 7138380780676917330ULL;
unsigned long long int var_11 = 10821873812161167466ULL;
unsigned int var_12 = 931305088U;
signed char var_13 = (signed char)-24;
unsigned int var_14 = 3289166962U;
unsigned short var_15 = (unsigned short)10889;
unsigned int var_16 = 2805167691U;
int zero = 0;
signed char var_17 = (signed char)-69;
unsigned short var_18 = (unsigned short)61560;
unsigned long long int var_19 = 4332554426695051057ULL;
unsigned short var_20 = (unsigned short)6379;
int var_21 = -646495179;
unsigned long long int var_22 = 11661960428103434359ULL;
short var_23 = (short)-10686;
short var_24 = (short)27656;
unsigned short var_25 = (unsigned short)64146;
unsigned int var_26 = 1689824426U;
unsigned short var_27 = (unsigned short)9710;
unsigned short var_28 = (unsigned short)40982;
int var_29 = 659537592;
unsigned int var_30 = 3154394538U;
unsigned int var_31 = 1342369448U;
unsigned short var_32 = (unsigned short)3945;
long long int arr_0 [12] ;
signed char arr_4 [12] [12] ;
unsigned char arr_5 [12] ;
unsigned int arr_6 [12] [12] ;
unsigned char arr_8 [12] [12] ;
short arr_10 [12] [12] ;
int arr_16 [12] [12] ;
unsigned short arr_23 [12] [12] [12] [12] ;
short arr_24 [12] [12] ;
int arr_27 [10] ;
unsigned int arr_2 [12] [12] ;
long long int arr_3 [12] [12] ;
unsigned short arr_17 [12] [12] [12] ;
int arr_25 [12] ;
unsigned short arr_31 [13] ;
unsigned int arr_32 [13] ;
int arr_33 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 4040829990048834818LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 3883104429U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)31110 : (short)32701;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = -125522057;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34920;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (short)25281;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = -1397139962;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1381374892U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -5981137014949933717LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)63733 : (unsigned short)50452;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = 1063459199;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (unsigned short)52197;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = 4288079588U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = -400870870;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
