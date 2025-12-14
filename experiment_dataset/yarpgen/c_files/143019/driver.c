#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8244411723281060542LL;
unsigned long long int var_1 = 15936864354027655086ULL;
int var_2 = 1145492239;
unsigned long long int var_6 = 7119179419096901691ULL;
long long int var_8 = -7085682050416237341LL;
unsigned long long int var_9 = 15660279732789372866ULL;
int var_10 = 571833570;
int zero = 0;
unsigned short var_17 = (unsigned short)55795;
int var_18 = 2119204220;
unsigned long long int var_19 = 11839108309834042734ULL;
long long int var_20 = 4219834500729536693LL;
unsigned short var_21 = (unsigned short)47778;
unsigned long long int var_22 = 13477822494972439580ULL;
unsigned short var_23 = (unsigned short)32622;
unsigned long long int var_24 = 13256126077471880915ULL;
unsigned long long int var_25 = 12705447269409893325ULL;
unsigned short var_26 = (unsigned short)46595;
unsigned long long int arr_0 [22] [22] ;
_Bool arr_2 [22] ;
unsigned long long int arr_3 [10] ;
unsigned int arr_4 [10] [10] ;
unsigned int arr_11 [22] ;
signed char arr_13 [19] ;
int arr_5 [10] [10] ;
long long int arr_8 [10] [10] ;
unsigned int arr_12 [22] ;
unsigned short arr_15 [19] ;
_Bool arr_16 [19] ;
unsigned long long int arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 14194226821395574910ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3904327298638228721ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1949006394U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 2890355927U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -878213678;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = -7524799006270063364LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 3791772220U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (unsigned short)64775;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 18048518364645197912ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
