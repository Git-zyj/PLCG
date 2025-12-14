#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3656042957524177739LL;
unsigned char var_1 = (unsigned char)202;
unsigned int var_4 = 3877122570U;
long long int var_5 = -4587266157647036150LL;
signed char var_7 = (signed char)97;
unsigned char var_8 = (unsigned char)116;
int var_9 = 1000478361;
long long int var_10 = -3386338063762581161LL;
long long int var_17 = 3500094572513438701LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-11580;
signed char var_21 = (signed char)123;
unsigned char var_22 = (unsigned char)139;
short var_23 = (short)29634;
unsigned long long int var_24 = 6704101553239834916ULL;
signed char var_25 = (signed char)-98;
short var_26 = (short)21764;
unsigned int var_27 = 28315014U;
signed char var_28 = (signed char)-34;
_Bool var_29 = (_Bool)1;
unsigned short arr_0 [17] ;
unsigned short arr_2 [17] ;
_Bool arr_3 [17] ;
unsigned short arr_4 [17] [17] ;
unsigned short arr_5 [11] ;
int arr_10 [11] [11] ;
unsigned long long int arr_11 [11] [11] [11] ;
long long int arr_12 [11] ;
_Bool arr_17 [13] [13] ;
unsigned short arr_20 [24] [24] ;
unsigned short arr_21 [24] ;
int arr_7 [11] [11] ;
unsigned short arr_18 [13] ;
signed char arr_19 [13] ;
int arr_22 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)60391;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)50532;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)40136;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)28113;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = -84090600;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 17745155948011629475ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = -2072286651945096770LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)41374;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (unsigned short)4958;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 340054941;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned short)44382;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = 866542385;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
