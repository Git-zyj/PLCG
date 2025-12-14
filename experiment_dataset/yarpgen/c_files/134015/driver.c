#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 785168091U;
unsigned char var_1 = (unsigned char)208;
unsigned int var_2 = 1695949258U;
_Bool var_4 = (_Bool)1;
long long int var_5 = -5974875110373097349LL;
unsigned int var_6 = 3270585873U;
unsigned char var_7 = (unsigned char)18;
unsigned int var_8 = 1215470017U;
long long int var_9 = 2617287682055690341LL;
signed char var_10 = (signed char)33;
signed char var_11 = (signed char)-95;
unsigned int var_13 = 4061699567U;
signed char var_14 = (signed char)8;
unsigned short var_15 = (unsigned short)26286;
signed char var_16 = (signed char)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)94;
unsigned int var_19 = 3144020459U;
unsigned short var_20 = (unsigned short)23272;
long long int var_21 = 7618692485517406873LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -2875579731885167159LL;
unsigned char var_24 = (unsigned char)167;
unsigned int var_25 = 3794148657U;
unsigned short arr_0 [15] ;
long long int arr_1 [15] [15] ;
unsigned int arr_5 [15] [15] [15] ;
long long int arr_9 [22] [22] ;
signed char arr_11 [22] ;
unsigned long long int arr_13 [22] [22] [22] [22] ;
unsigned char arr_16 [22] [22] [22] [22] ;
unsigned long long int arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)26274;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 2559346804664887808LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2727780202U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 1343954410087902540LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 7887525802315727130ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 428664770192803375ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
