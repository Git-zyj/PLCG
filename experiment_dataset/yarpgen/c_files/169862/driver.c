#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1795825850;
int var_1 = -1725082388;
long long int var_2 = -1645758116540409799LL;
long long int var_3 = -50065117521239856LL;
unsigned long long int var_4 = 4539048553344553301ULL;
unsigned int var_7 = 2727970018U;
long long int var_8 = -1543331061988459739LL;
int var_10 = -1936345422;
unsigned int var_11 = 1889484901U;
signed char var_12 = (signed char)62;
unsigned long long int var_15 = 13725408570431329223ULL;
unsigned long long int var_16 = 228606978435723585ULL;
signed char var_17 = (signed char)-25;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = -1445418666;
unsigned short var_20 = (unsigned short)5224;
unsigned long long int var_21 = 10336140338401647225ULL;
unsigned short var_22 = (unsigned short)4011;
unsigned short var_23 = (unsigned short)63670;
unsigned long long int var_24 = 11054134483512070784ULL;
int var_25 = -499331594;
unsigned short var_26 = (unsigned short)60977;
unsigned char var_27 = (unsigned char)221;
unsigned short arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
unsigned int arr_3 [19] ;
signed char arr_4 [14] ;
signed char arr_6 [14] ;
_Bool arr_14 [14] [14] [14] ;
unsigned int arr_16 [14] [14] [14] [14] ;
_Bool arr_19 [23] [23] ;
unsigned char arr_20 [23] [23] ;
unsigned long long int arr_7 [14] [14] ;
unsigned short arr_12 [14] ;
int arr_17 [14] ;
signed char arr_18 [14] ;
unsigned long long int arr_21 [23] ;
unsigned short arr_22 [23] ;
signed char arr_23 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)54375;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 640129458U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 11490055942856655502ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 198444158U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 2659441528U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 11010444337679586767ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned short)45490;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 590002558;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 10465571970110928930ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (unsigned short)7056;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (signed char)17;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
