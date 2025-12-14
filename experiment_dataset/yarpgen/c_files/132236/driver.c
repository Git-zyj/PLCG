#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7531198340075965343ULL;
unsigned long long int var_1 = 13651105656076971793ULL;
unsigned int var_2 = 3677872703U;
long long int var_5 = 7908263716993839480LL;
unsigned long long int var_8 = 1266264595379087382ULL;
unsigned long long int var_11 = 274459057139240817ULL;
unsigned char var_12 = (unsigned char)59;
unsigned long long int var_14 = 16272576759493485712ULL;
unsigned int var_15 = 598038419U;
unsigned char var_18 = (unsigned char)111;
unsigned long long int var_19 = 2892833180893187549ULL;
int zero = 0;
unsigned long long int var_20 = 7037672384997895673ULL;
unsigned long long int var_21 = 4832029050926537785ULL;
unsigned int var_22 = 462139508U;
signed char var_23 = (signed char)17;
unsigned int var_24 = 162688224U;
unsigned char var_25 = (unsigned char)194;
long long int var_26 = -6240393806368366965LL;
unsigned long long int arr_3 [16] [16] ;
int arr_4 [16] ;
int arr_13 [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 16162342097870772405ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1440086590;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -501966559;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
