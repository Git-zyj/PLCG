#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_14 = (unsigned short)20331;
short var_15 = (short)-6887;
int zero = 0;
long long int var_16 = 1096486831740730464LL;
unsigned char var_17 = (unsigned char)163;
unsigned char var_18 = (unsigned char)56;
unsigned char var_19 = (unsigned char)105;
long long int var_20 = 7098097219778378207LL;
short var_21 = (short)-1625;
int arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
short arr_2 [17] ;
signed char arr_3 [17] ;
int arr_5 [22] [22] ;
unsigned char arr_6 [22] [22] ;
int arr_7 [22] ;
unsigned short arr_10 [18] [18] ;
short arr_11 [18] ;
int arr_17 [18] [18] [18] ;
short arr_4 [17] ;
unsigned short arr_8 [22] ;
short arr_9 [22] ;
int arr_12 [18] ;
unsigned char arr_13 [18] [18] ;
unsigned long long int arr_19 [18] ;
signed char arr_29 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2145657726;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)31662;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)17372;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1199399687;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -202218735;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)35480;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (short)21174;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -103258787;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)21704;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)31526;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (short)-23683;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = -637328054;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 10159717534594237248ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)47 : (signed char)8;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
