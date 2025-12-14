#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
unsigned short var_2 = (unsigned short)42761;
unsigned int var_3 = 2469761510U;
int var_4 = 825049184;
int var_5 = -1039867338;
int var_6 = 304306199;
long long int var_7 = 97680471970683213LL;
unsigned long long int var_9 = 18344418445927073008ULL;
unsigned long long int var_10 = 5696335645549917164ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 8964243710300085929ULL;
unsigned short var_14 = (unsigned short)15439;
long long int var_15 = 3138086187110824258LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)241;
unsigned short var_18 = (unsigned short)34309;
unsigned long long int var_19 = 6833192826792999576ULL;
unsigned char arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
unsigned short arr_5 [10] ;
_Bool arr_2 [20] [20] ;
unsigned int arr_3 [20] ;
unsigned short arr_6 [10] ;
int arr_9 [10] ;
unsigned long long int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)50029;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2903474075U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)62212;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 626977924;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 12091150985502524273ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
