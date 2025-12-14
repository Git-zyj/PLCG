#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 949866690;
unsigned short var_1 = (unsigned short)48173;
signed char var_2 = (signed char)-102;
int var_4 = -562582841;
unsigned long long int var_5 = 13385263817905708884ULL;
signed char var_11 = (signed char)-26;
unsigned int var_12 = 3561585448U;
unsigned long long int var_13 = 10860669186620341873ULL;
unsigned char var_15 = (unsigned char)250;
int zero = 0;
short var_19 = (short)15430;
unsigned short var_20 = (unsigned short)58974;
signed char var_21 = (signed char)-24;
unsigned short arr_2 [22] ;
int arr_4 [22] ;
unsigned short arr_5 [22] [22] [22] ;
int arr_6 [22] [22] ;
_Bool arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)31459;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1277280412;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)6121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -451026542;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
