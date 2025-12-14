#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12472869701031789277ULL;
int var_1 = 1737232652;
unsigned char var_2 = (unsigned char)110;
int var_3 = -1217479238;
unsigned int var_4 = 2749328401U;
unsigned long long int var_6 = 9356924367109175102ULL;
unsigned short var_8 = (unsigned short)36629;
unsigned long long int var_10 = 6259310977848877347ULL;
int var_11 = 1943210522;
int zero = 0;
unsigned int var_12 = 2284596149U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)57;
unsigned long long int var_15 = 1133851866189167120ULL;
int var_16 = 1447575183;
unsigned int var_17 = 1706324333U;
_Bool var_18 = (_Bool)0;
long long int var_19 = 8742874152540272154LL;
unsigned int var_20 = 1379584633U;
_Bool var_21 = (_Bool)1;
unsigned int arr_0 [22] ;
int arr_3 [22] [22] [22] ;
unsigned short arr_5 [22] ;
long long int arr_6 [22] [22] [22] [22] ;
long long int arr_7 [22] [22] [22] [22] ;
short arr_8 [22] ;
long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3066766042U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 476956970;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)15542;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -6007843631826488721LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -3067031395237940568LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)-2765;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -5199687201799796006LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
