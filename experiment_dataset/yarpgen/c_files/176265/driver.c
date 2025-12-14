#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
short var_1 = (short)24500;
unsigned short var_2 = (unsigned short)29572;
unsigned long long int var_4 = 1617081114915605058ULL;
unsigned long long int var_5 = 11735344669595522573ULL;
unsigned int var_7 = 443157224U;
int var_8 = 774476614;
unsigned long long int var_9 = 1670430327325116079ULL;
unsigned long long int var_10 = 13205022837187291948ULL;
unsigned long long int var_11 = 14524880016577372763ULL;
int zero = 0;
int var_12 = 386677207;
unsigned long long int var_13 = 6780170692467072769ULL;
int var_14 = -1378611389;
unsigned long long int var_15 = 9644222429646956568ULL;
int var_16 = 888514937;
unsigned long long int var_17 = 1872356002414480756ULL;
unsigned int var_18 = 3490607127U;
unsigned long long int var_19 = 13193084894720672073ULL;
unsigned int var_20 = 4252999848U;
long long int var_21 = 6898581730397756985LL;
int var_22 = -1625629783;
unsigned short arr_0 [20] [20] ;
short arr_1 [20] [20] ;
short arr_3 [20] ;
unsigned long long int arr_4 [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] ;
int arr_11 [20] [20] ;
short arr_2 [20] ;
unsigned long long int arr_5 [20] ;
unsigned int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)49857;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-20756;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-30864;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 12292022039359477608ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 16359249903268363291ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 1086980070;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-26121;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 12033221483302541982ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 631646201U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
