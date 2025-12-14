#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8103685788040293502ULL;
signed char var_1 = (signed char)-89;
unsigned long long int var_2 = 7795784210851482782ULL;
long long int var_3 = -6287436378904338776LL;
long long int var_4 = 6321487082955548916LL;
unsigned int var_5 = 261936719U;
long long int var_6 = 6011191358895921306LL;
unsigned char var_7 = (unsigned char)36;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)143;
unsigned int var_10 = 1203132977U;
unsigned int var_11 = 915838185U;
unsigned long long int var_12 = 15976597421675903956ULL;
long long int var_13 = -6303392831482020079LL;
unsigned int var_14 = 3698723725U;
int zero = 0;
long long int var_15 = 9097472332047820554LL;
long long int var_16 = -6169881082132490998LL;
signed char var_17 = (signed char)27;
unsigned long long int var_18 = 11490651021865136137ULL;
signed char var_19 = (signed char)100;
unsigned long long int var_20 = 4219071418505863343ULL;
long long int var_21 = -4963957659156938035LL;
unsigned long long int var_22 = 15921753297086337273ULL;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)109;
signed char var_25 = (signed char)84;
unsigned char var_26 = (unsigned char)39;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)65;
unsigned long long int arr_4 [11] [11] [11] ;
signed char arr_13 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_18 [22] ;
unsigned char arr_19 [22] ;
long long int arr_21 [16] ;
long long int arr_22 [16] [16] ;
unsigned long long int arr_30 [16] [16] ;
signed char arr_33 [16] ;
unsigned int arr_51 [16] ;
unsigned int arr_54 [16] [16] ;
long long int arr_17 [11] [11] [11] [11] [11] ;
unsigned char arr_20 [22] [22] ;
unsigned int arr_25 [16] ;
signed char arr_26 [16] [16] ;
unsigned char arr_27 [16] [16] ;
signed char arr_28 [16] ;
long long int arr_31 [16] [16] ;
unsigned char arr_32 [16] ;
unsigned long long int arr_37 [16] ;
signed char arr_43 [16] ;
unsigned int arr_44 [16] [16] ;
signed char arr_50 [16] ;
unsigned long long int arr_58 [16] [16] [16] [16] ;
unsigned long long int arr_59 [16] [16] ;
long long int arr_60 [16] [16] ;
_Bool arr_61 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8301684068081586198ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 785952511U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = 4985864247893032816LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = 6629017219541900480LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = 7563685730797114261ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_33 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_51 [i_0] = 2015803231U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_54 [i_0] [i_1] = 1596809525U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -4726019620158560078LL : -2711621513081037320LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = 50116016U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_31 [i_0] [i_1] = -482909891968602827LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_37 [i_0] = 1437522795565134834ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_43 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_44 [i_0] [i_1] = 164974516U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? (signed char)13 : (signed char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = 4068585424946116922ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_59 [i_0] [i_1] = 12364232796735052587ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_60 [i_0] [i_1] = 3715902857574765646LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_61 [i_0] = (_Bool)0;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_59 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_60 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_61 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
