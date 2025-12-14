#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4983829757496023774ULL;
long long int var_4 = -6512170932334236737LL;
short var_5 = (short)22133;
long long int var_6 = -5056750813889836280LL;
unsigned int var_7 = 114725184U;
unsigned int var_13 = 3956724383U;
long long int var_14 = 465557099606513344LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)43918;
signed char var_21 = (signed char)-14;
signed char var_22 = (signed char)-109;
int var_23 = 1393357992;
unsigned long long int var_24 = 7224905037637385702ULL;
long long int var_25 = -1038906533201334583LL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 7077821370044440363LL;
unsigned long long int var_28 = 7575929835227627853ULL;
unsigned long long int var_29 = 4474531609611512ULL;
unsigned short var_30 = (unsigned short)6811;
unsigned long long int var_31 = 672629124445586611ULL;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)63803;
unsigned long long int var_34 = 2638233897538249067ULL;
unsigned char arr_0 [12] ;
unsigned short arr_1 [12] ;
long long int arr_4 [12] [12] [12] ;
short arr_5 [12] [12] [12] ;
signed char arr_8 [13] ;
int arr_9 [13] ;
unsigned long long int arr_11 [13] [13] ;
unsigned long long int arr_12 [13] [13] [13] ;
long long int arr_21 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17984 : (unsigned short)16554;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 7880220769851239419LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)1663;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -1115939235;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 12617430568131367180ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 5805857952449586185ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 8727679055572285005LL : 5456807365261768750LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
