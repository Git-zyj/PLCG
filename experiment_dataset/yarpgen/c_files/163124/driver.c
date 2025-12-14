#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3193293283U;
short var_1 = (short)6469;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 8217788247137068773ULL;
int var_5 = -1176691386;
long long int var_7 = 4035375575028815081LL;
unsigned short var_9 = (unsigned short)27493;
signed char var_10 = (signed char)-120;
int var_11 = 546164596;
unsigned char var_13 = (unsigned char)202;
short var_14 = (short)11843;
unsigned short var_15 = (unsigned short)38178;
signed char var_16 = (signed char)-59;
int var_17 = -570879064;
unsigned long long int var_18 = 7227594501958585076ULL;
unsigned short var_19 = (unsigned short)22922;
int zero = 0;
long long int var_20 = -2059153984685121053LL;
unsigned char var_21 = (unsigned char)164;
unsigned long long int var_22 = 14500669839626938796ULL;
unsigned char var_23 = (unsigned char)162;
unsigned long long int var_24 = 17878917352445469248ULL;
long long int var_25 = 2900848057443303359LL;
short var_26 = (short)1656;
unsigned char var_27 = (unsigned char)198;
long long int var_28 = -6026031171214771658LL;
long long int var_29 = -2442477904748528930LL;
short arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned long long int arr_12 [23] ;
long long int arr_16 [17] ;
short arr_17 [17] ;
signed char arr_2 [13] [13] ;
_Bool arr_10 [13] [13] [13] ;
unsigned long long int arr_11 [13] [13] [13] ;
long long int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)1364;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)28429;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 142264608952495214ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -2629312838255070808LL : 689135596848838509LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (short)15657;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1647295734723877631ULL : 9109649629760898568ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 2756220564166594947LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
