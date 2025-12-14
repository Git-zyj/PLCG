#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
signed char var_3 = (signed char)60;
signed char var_4 = (signed char)96;
long long int var_6 = 1385595311901481126LL;
unsigned short var_9 = (unsigned short)36623;
int var_10 = -398927878;
long long int var_13 = 5162621548741447505LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)144;
int zero = 0;
unsigned long long int var_19 = 18192652089240637373ULL;
unsigned char var_20 = (unsigned char)193;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 11165219879365809236ULL;
unsigned char arr_1 [12] [12] ;
signed char arr_4 [21] ;
unsigned int arr_6 [21] ;
unsigned char arr_2 [12] ;
unsigned short arr_9 [21] [21] ;
unsigned char arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 787211012U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)40353 : (unsigned short)53432;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)190 : (unsigned char)252;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
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
