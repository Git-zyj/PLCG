#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7019962813208873894LL;
unsigned short var_1 = (unsigned short)13726;
short var_2 = (short)11699;
unsigned char var_4 = (unsigned char)93;
long long int var_5 = 7749102325939688056LL;
unsigned long long int var_6 = 1066478916899605313ULL;
unsigned char var_7 = (unsigned char)16;
unsigned char var_8 = (unsigned char)52;
unsigned short var_9 = (unsigned short)1985;
int var_10 = 2067130542;
unsigned char var_13 = (unsigned char)162;
int zero = 0;
int var_14 = 1448416750;
unsigned short var_15 = (unsigned short)17413;
signed char var_16 = (signed char)75;
unsigned short var_17 = (unsigned short)9426;
int var_18 = 1664071605;
unsigned long long int var_19 = 8473362994183392548ULL;
short var_20 = (short)8297;
unsigned int var_21 = 4273078449U;
short var_22 = (short)30490;
short var_23 = (short)9851;
unsigned long long int var_24 = 758443606212710996ULL;
unsigned long long int var_25 = 950637079868438957ULL;
unsigned int var_26 = 3204075410U;
short var_27 = (short)-22534;
unsigned long long int var_28 = 3425059217392581067ULL;
unsigned int var_29 = 1194771810U;
int var_30 = 154946999;
unsigned char arr_0 [13] ;
unsigned char arr_7 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_8 [13] [13] [13] [13] ;
int arr_9 [13] ;
unsigned long long int arr_10 [11] ;
short arr_15 [11] [11] ;
unsigned int arr_16 [11] [11] [11] ;
unsigned int arr_27 [15] [15] ;
signed char arr_30 [24] ;
_Bool arr_35 [24] ;
unsigned int arr_36 [24] [24] [24] ;
unsigned long long int arr_37 [24] [24] [24] ;
long long int arr_2 [13] ;
short arr_22 [11] [11] [11] [11] [11] ;
int arr_25 [10] ;
int arr_28 [15] ;
long long int arr_29 [15] [15] ;
unsigned short arr_41 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3617559962U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -781625689;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 4205766389699533554ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (short)1547;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1191715312U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = 1404748950U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 1795698852U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 17225638429426014466ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 232972354267161772LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-9188 : (short)14793;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = -1374526981;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = -678219704;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = -3596523270892734343LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43433 : (unsigned short)45515;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
