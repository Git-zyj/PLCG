#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 407695944U;
unsigned char var_7 = (unsigned char)54;
unsigned short var_8 = (unsigned short)4995;
unsigned long long int var_10 = 10236032666003929972ULL;
long long int var_11 = 8229163284726194085LL;
signed char var_12 = (signed char)98;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)21351;
long long int var_16 = 7037145225372937782LL;
int zero = 0;
int var_18 = 1534070165;
signed char var_19 = (signed char)117;
int var_20 = 1173139112;
signed char var_21 = (signed char)-78;
unsigned int var_22 = 1647759046U;
_Bool var_23 = (_Bool)1;
long long int var_24 = 3568115804221349067LL;
signed char var_25 = (signed char)-30;
signed char var_26 = (signed char)-39;
long long int var_27 = -615287511144655040LL;
unsigned char arr_0 [22] [22] ;
short arr_1 [22] [22] ;
unsigned short arr_2 [22] ;
long long int arr_5 [22] [22] [22] ;
unsigned char arr_9 [22] ;
long long int arr_6 [22] [22] ;
unsigned short arr_7 [22] [22] ;
unsigned char arr_8 [22] [22] ;
int arr_11 [22] ;
int arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-13165;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)56733;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4675248896249585425LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 8736789249419552065LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)23606;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -1184746603;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = -18069851;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
