#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11787;
long long int var_2 = 3143045013679863897LL;
short var_4 = (short)-17297;
int var_6 = -1692240639;
unsigned long long int var_11 = 6571312596064686806ULL;
short var_14 = (short)-4889;
signed char var_16 = (signed char)-112;
int zero = 0;
unsigned long long int var_17 = 4367191903401861499ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -2073132192995459994LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8900751345767896490LL;
int var_23 = 657544558;
long long int var_24 = 1192072590954731849LL;
unsigned long long int arr_2 [21] ;
_Bool arr_4 [21] [21] ;
short arr_6 [21] ;
short arr_7 [21] ;
unsigned long long int arr_14 [23] ;
long long int arr_3 [21] [21] ;
long long int arr_8 [21] ;
short arr_13 [13] ;
int arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3717842137901938334ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)22177;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)4764;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 15693985281661793753ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -4507387677529835092LL : -2851071836078468868LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 6241628257601297005LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (short)-27659;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 1270915156;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
