#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2542904782264105648LL;
unsigned short var_3 = (unsigned short)39602;
int var_8 = -108633111;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-24;
short var_12 = (short)19269;
long long int var_13 = -7845453922114075629LL;
unsigned short var_15 = (unsigned short)62598;
unsigned short var_16 = (unsigned short)3876;
short var_17 = (short)-9617;
int zero = 0;
short var_20 = (short)-2902;
short var_21 = (short)4916;
signed char var_22 = (signed char)109;
signed char var_23 = (signed char)-103;
int var_24 = -247767458;
signed char var_25 = (signed char)45;
short var_26 = (short)27732;
signed char var_27 = (signed char)-108;
int var_28 = 1488882456;
unsigned short var_29 = (unsigned short)46461;
unsigned long long int arr_0 [10] [10] ;
unsigned long long int arr_1 [10] ;
short arr_2 [21] ;
long long int arr_3 [21] ;
unsigned short arr_8 [15] [15] [15] ;
signed char arr_9 [15] ;
unsigned char arr_10 [15] [15] [15] ;
int arr_13 [15] [15] [15] [15] ;
long long int arr_4 [21] ;
int arr_16 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1956892465473611372ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1125575954762979639ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)27830;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 5610725497908960835LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)31477;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -480758657;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 7194837548461942062LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = -1102623650;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
