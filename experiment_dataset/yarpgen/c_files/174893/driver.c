#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-106;
long long int var_3 = 6489987959071812038LL;
long long int var_9 = 6274316592103595101LL;
unsigned short var_11 = (unsigned short)20208;
int zero = 0;
short var_17 = (short)20805;
unsigned int var_18 = 4172336488U;
unsigned long long int var_19 = 15677879588042367572ULL;
unsigned int var_20 = 2662195596U;
long long int var_21 = 1453752756743627725LL;
short var_22 = (short)16674;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 11775759542335094358ULL;
unsigned long long int var_25 = 14121234171914166989ULL;
unsigned long long int var_26 = 15435909881733204288ULL;
long long int var_27 = -7329328165558916783LL;
unsigned long long int arr_0 [22] ;
signed char arr_1 [22] ;
_Bool arr_5 [19] ;
short arr_6 [19] ;
unsigned int arr_14 [19] [19] [19] [19] ;
long long int arr_17 [19] ;
long long int arr_2 [22] [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 10060142171039159150ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)-26689;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 1725966693U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 8088680007891228218LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -2736911744834648283LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 8624487062287629765LL;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
