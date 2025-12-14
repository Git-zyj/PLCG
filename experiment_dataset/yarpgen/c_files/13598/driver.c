#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1989488483117964353ULL;
short var_3 = (short)22461;
long long int var_4 = -5998844197457912744LL;
unsigned char var_5 = (unsigned char)15;
unsigned char var_6 = (unsigned char)224;
long long int var_7 = -5867475446903142208LL;
long long int var_13 = -5661384340530946403LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 17931781030782806261ULL;
int var_19 = -1304504730;
int zero = 0;
signed char var_20 = (signed char)-77;
signed char var_21 = (signed char)-48;
short var_22 = (short)-31008;
short var_23 = (short)-5103;
unsigned short arr_0 [11] [11] ;
long long int arr_1 [11] [11] ;
long long int arr_2 [11] ;
long long int arr_3 [11] ;
unsigned short arr_4 [11] [11] ;
short arr_5 [11] [11] ;
unsigned short arr_8 [11] [11] ;
short arr_11 [11] [11] ;
signed char arr_12 [11] ;
_Bool arr_6 [11] ;
long long int arr_7 [11] [11] [11] ;
unsigned long long int arr_13 [11] ;
unsigned int arr_14 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)57697;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 7576526510444751289LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -8592031543639499288LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2509012144365466252LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)11927;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-12404;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)25519;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (short)31359;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -3208796074934775721LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 2996272104902596155ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 2005511229U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
