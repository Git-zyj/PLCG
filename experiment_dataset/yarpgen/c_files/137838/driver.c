#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3082443120753823446ULL;
unsigned char var_1 = (unsigned char)140;
long long int var_2 = 6749857877204248587LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3164682772U;
unsigned long long int var_6 = 9592799488043213298ULL;
long long int var_9 = 821833767462934967LL;
unsigned long long int var_10 = 18371101807925976141ULL;
unsigned int var_11 = 3862673407U;
unsigned long long int var_13 = 8778417060051909572ULL;
unsigned char var_14 = (unsigned char)223;
int var_15 = 1956699304;
unsigned int var_16 = 1045562206U;
long long int var_17 = -8731765104522003088LL;
int zero = 0;
long long int var_19 = 5524133833789409541LL;
long long int var_20 = 8108620871483254017LL;
unsigned char var_21 = (unsigned char)208;
unsigned char var_22 = (unsigned char)208;
int var_23 = 2132344509;
unsigned char var_24 = (unsigned char)217;
int var_25 = 1815774783;
unsigned int var_26 = 3231772156U;
unsigned long long int var_27 = 15006950010320037477ULL;
int var_28 = 201796350;
unsigned long long int var_29 = 7993238265346627792ULL;
_Bool arr_0 [13] ;
_Bool arr_4 [13] ;
long long int arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8920681428863444787LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
