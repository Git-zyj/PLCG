#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2616219180235214166LL;
long long int var_2 = -5276662827553083127LL;
long long int var_3 = 5637258422554280073LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 16395478888822382055ULL;
long long int var_7 = 1304978359874555741LL;
unsigned char var_9 = (unsigned char)47;
short var_10 = (short)-17841;
unsigned long long int var_11 = 7335566430206645441ULL;
int zero = 0;
unsigned long long int var_12 = 6049462061171399346ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1961965618U;
unsigned long long int var_15 = 10073382783996984333ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned char arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned long long int arr_8 [21] ;
unsigned long long int arr_9 [21] [21] ;
_Bool arr_2 [23] ;
_Bool arr_3 [23] [23] ;
_Bool arr_7 [12] [12] ;
_Bool arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 6142744555968102806LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 2122918244691261506ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 11753328136929624374ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
