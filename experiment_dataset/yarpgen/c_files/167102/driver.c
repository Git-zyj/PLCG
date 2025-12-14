#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned short var_2 = (unsigned short)42884;
unsigned long long int var_3 = 5957714506737343515ULL;
unsigned int var_4 = 1581547569U;
unsigned long long int var_6 = 8502576804796552725ULL;
unsigned int var_7 = 754330846U;
long long int var_8 = -5618628813243218697LL;
short var_9 = (short)31519;
unsigned short var_10 = (unsigned short)8683;
long long int var_11 = 4511892818033746696LL;
unsigned long long int var_12 = 3670686602407387008ULL;
long long int var_13 = -2659349874439909762LL;
short var_16 = (short)-23758;
short var_17 = (short)7386;
signed char var_18 = (signed char)73;
unsigned short var_19 = (unsigned short)31506;
int zero = 0;
short var_20 = (short)21832;
signed char var_21 = (signed char)102;
signed char var_22 = (signed char)-56;
signed char var_23 = (signed char)-82;
unsigned long long int var_24 = 13326332449393529364ULL;
unsigned int var_25 = 1603552038U;
long long int var_26 = 3278136001126320094LL;
unsigned int var_27 = 3746294597U;
short var_28 = (short)7290;
unsigned long long int var_29 = 14747044613329498784ULL;
signed char var_30 = (signed char)6;
long long int var_31 = -1812209065815715829LL;
long long int var_32 = -8458471267084698801LL;
short var_33 = (short)-3092;
unsigned long long int arr_1 [21] ;
signed char arr_2 [21] ;
unsigned short arr_5 [21] ;
unsigned short arr_6 [21] ;
unsigned int arr_8 [21] [21] ;
signed char arr_9 [21] [21] [21] ;
unsigned long long int arr_11 [21] ;
unsigned long long int arr_13 [21] [21] [21] ;
unsigned short arr_14 [21] [21] ;
unsigned short arr_15 [21] [21] [21] [21] ;
unsigned int arr_17 [21] [21] [21] [21] ;
signed char arr_20 [21] [21] [21] [21] ;
signed char arr_25 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 11730024299441567977ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)38250;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)7099;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 1414045989U : 3244844009U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 7820396004724193414ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 10693656241177881467ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)52605;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31917;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 3229231074U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)-3;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
