#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1986481375U;
long long int var_1 = 8004167567308020926LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 16710499544400310188ULL;
signed char var_5 = (signed char)-17;
unsigned short var_6 = (unsigned short)42427;
unsigned long long int var_7 = 784493166279467374ULL;
unsigned char var_8 = (unsigned char)100;
unsigned short var_10 = (unsigned short)4113;
long long int var_11 = 903703399604428933LL;
short var_13 = (short)12418;
short var_14 = (short)18738;
int zero = 0;
unsigned char var_15 = (unsigned char)210;
int var_16 = 1204851440;
int var_17 = -714117837;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)41;
unsigned char var_20 = (unsigned char)204;
long long int var_21 = 5385981516569535273LL;
unsigned short var_22 = (unsigned short)39454;
unsigned char var_23 = (unsigned char)209;
long long int var_24 = -940528983651235450LL;
unsigned short var_25 = (unsigned short)10046;
short var_26 = (short)11620;
unsigned long long int var_27 = 17084543494144661156ULL;
signed char var_28 = (signed char)-1;
long long int var_29 = 5361199545150246596LL;
short var_30 = (short)18810;
long long int var_31 = 599587649474556765LL;
unsigned char arr_0 [25] ;
short arr_1 [25] ;
signed char arr_5 [25] [25] [25] ;
signed char arr_7 [25] [25] ;
int arr_13 [25] [25] ;
unsigned char arr_19 [24] ;
unsigned short arr_35 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
signed char arr_11 [25] [25] [25] ;
unsigned long long int arr_15 [25] ;
long long int arr_20 [24] ;
short arr_36 [17] ;
int arr_37 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)21558;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = -577743483;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)51515;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 11551153806989776588ULL : 7443775363669309840ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 17363610335775610444ULL : 18183516856110628934ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)43 : (signed char)-20;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 13483122460256749445ULL : 9402416254576502083ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = -3010965742685962522LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_36 [i_0] = (short)-7468;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = -1696956;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
