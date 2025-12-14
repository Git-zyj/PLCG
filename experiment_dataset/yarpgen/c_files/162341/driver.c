#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-6844;
unsigned long long int var_3 = 12863298611810001242ULL;
unsigned long long int var_5 = 7296232746292914612ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-6236;
short var_8 = (short)-7074;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7053603450692402011ULL;
short var_15 = (short)31181;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 10213229120614079902ULL;
unsigned long long int var_20 = 9768795653803098073ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)13288;
unsigned long long int var_23 = 10803380455600873043ULL;
unsigned long long int var_24 = 14023642116870887270ULL;
unsigned long long int var_25 = 1787973744914847813ULL;
short var_26 = (short)23812;
short var_27 = (short)-913;
unsigned long long int var_28 = 12470334023119312026ULL;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 678302286822293372ULL;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)0;
unsigned long long int var_34 = 3614229820594837930ULL;
unsigned long long int var_35 = 10576770457514500863ULL;
_Bool var_36 = (_Bool)0;
unsigned long long int var_37 = 6917635155532868195ULL;
unsigned long long int var_38 = 380682353406916374ULL;
_Bool var_39 = (_Bool)1;
_Bool var_40 = (_Bool)1;
unsigned long long int var_41 = 8150046924335270273ULL;
short var_42 = (short)-6951;
_Bool var_43 = (_Bool)1;
unsigned long long int var_44 = 6920162487964235978ULL;
_Bool var_45 = (_Bool)1;
_Bool var_46 = (_Bool)1;
short var_47 = (short)-22436;
short var_48 = (short)-1794;
_Bool arr_0 [19] ;
_Bool arr_1 [19] ;
_Bool arr_2 [19] ;
_Bool arr_4 [19] [19] ;
_Bool arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
unsigned long long int arr_7 [19] ;
unsigned long long int arr_11 [19] [19] [19] ;
_Bool arr_12 [19] ;
_Bool arr_13 [19] [19] [19] [19] [19] ;
_Bool arr_14 [19] [19] ;
unsigned long long int arr_16 [19] [19] [19] [19] ;
unsigned long long int arr_19 [19] [19] [19] [19] [19] ;
unsigned long long int arr_21 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_27 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 12977619270183273406ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 7237238858080621381ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1030303897157554817ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 1345490039512968196ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 16472293306147083161ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 892777977874342883ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = 4227099648152881223ULL;
}

void checksum() {
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
