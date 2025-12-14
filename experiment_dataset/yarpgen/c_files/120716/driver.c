#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
int var_3 = -43957894;
unsigned long long int var_4 = 7553218862347905165ULL;
unsigned long long int var_5 = 926397729477237098ULL;
int var_8 = 2043522205;
int var_10 = -2046707517;
unsigned long long int var_14 = 15476893455497290661ULL;
signed char var_15 = (signed char)68;
unsigned short var_16 = (unsigned short)59436;
int zero = 0;
unsigned long long int var_17 = 7717305197829290540ULL;
int var_18 = -444660625;
signed char var_19 = (signed char)-102;
signed char var_20 = (signed char)15;
unsigned long long int var_21 = 13087362464477381371ULL;
signed char var_22 = (signed char)-79;
signed char var_23 = (signed char)-62;
int var_24 = -854248678;
unsigned short arr_0 [10] ;
int arr_2 [10] ;
signed char arr_5 [10] ;
unsigned short arr_6 [16] ;
int arr_9 [16] [16] [16] ;
unsigned long long int arr_12 [16] ;
signed char arr_13 [16] [16] ;
unsigned long long int arr_15 [16] ;
unsigned short arr_17 [16] [16] [16] [16] ;
int arr_20 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44615 : (unsigned short)28279;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -785315446 : -1311804912;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)44203;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 22970984 : -1132327500;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 18284708051383192424ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 6651878574197519576ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)3153 : (unsigned short)46330;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 1768248057;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
