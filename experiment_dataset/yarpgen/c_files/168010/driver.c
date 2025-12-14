#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3142981873U;
unsigned char var_5 = (unsigned char)46;
long long int var_6 = -291505951994661576LL;
unsigned long long int var_8 = 13269297375100592855ULL;
unsigned int var_9 = 571560660U;
long long int var_10 = -8528228443808649821LL;
int zero = 0;
short var_11 = (short)26864;
unsigned long long int var_12 = 12696875580696121469ULL;
unsigned long long int var_13 = 2251255490362609642ULL;
signed char var_14 = (signed char)-35;
signed char var_15 = (signed char)-81;
unsigned long long int var_16 = 12998453791296481511ULL;
unsigned int var_17 = 4070756820U;
unsigned long long int var_18 = 6497504022658924524ULL;
unsigned long long int var_19 = 1086469161807092353ULL;
unsigned int var_20 = 2828469758U;
unsigned long long int var_21 = 18125689059137893761ULL;
int var_22 = -1125966431;
unsigned long long int var_23 = 7785054468857786874ULL;
long long int var_24 = 4263993895032757079LL;
unsigned long long int arr_1 [24] ;
long long int arr_2 [24] [24] ;
long long int arr_3 [24] [24] [24] ;
unsigned char arr_4 [24] ;
unsigned long long int arr_5 [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] ;
_Bool arr_9 [24] [24] ;
unsigned int arr_10 [24] [24] [24] [24] ;
signed char arr_11 [24] [24] ;
long long int arr_12 [24] [24] ;
signed char arr_14 [24] [24] [24] ;
unsigned int arr_17 [20] ;
unsigned int arr_21 [21] ;
unsigned char arr_19 [20] ;
unsigned char arr_22 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 16006875884622700554ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -8357552975394839494LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3359835478970642387LL : 4183893545604658042LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 5161101713497178618ULL : 7668675153704673243ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6507514358139526370ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 4086898828U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 2282533396918598287LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 4221822430U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 3534322943U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (unsigned char)61;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
