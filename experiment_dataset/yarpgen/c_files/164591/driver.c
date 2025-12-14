#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1613;
unsigned long long int var_6 = 6987225012895780247ULL;
unsigned long long int var_9 = 14263566170403776770ULL;
signed char var_10 = (signed char)-94;
unsigned int var_14 = 2437080832U;
int zero = 0;
unsigned int var_18 = 690138652U;
long long int var_19 = 7618293760769268056LL;
long long int var_20 = -4789078994302887576LL;
signed char var_21 = (signed char)28;
unsigned long long int var_22 = 9956419628112750149ULL;
signed char var_23 = (signed char)-56;
unsigned long long int var_24 = 14840619851462152371ULL;
signed char var_25 = (signed char)126;
unsigned char var_26 = (unsigned char)22;
signed char var_27 = (signed char)-57;
int arr_0 [22] ;
long long int arr_1 [22] ;
signed char arr_2 [22] [22] ;
unsigned int arr_3 [22] [22] ;
unsigned short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1574967952;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -3776429048322826325LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 1509535587U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)49542;
}

void checksum() {
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
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
