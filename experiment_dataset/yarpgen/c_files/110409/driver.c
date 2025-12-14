#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)87;
signed char var_3 = (signed char)32;
_Bool var_5 = (_Bool)0;
long long int var_8 = -7716175277283706351LL;
short var_9 = (short)-7902;
unsigned long long int var_11 = 10718693020750908391ULL;
unsigned short var_12 = (unsigned short)17367;
unsigned long long int var_14 = 16174795477821646468ULL;
short var_15 = (short)17126;
short var_17 = (short)-13839;
signed char var_19 = (signed char)62;
int zero = 0;
unsigned long long int var_20 = 16442693605196287645ULL;
short var_21 = (short)-12329;
signed char var_22 = (signed char)-17;
unsigned long long int var_23 = 13204009440989581871ULL;
short var_24 = (short)24531;
unsigned long long int var_25 = 4273369828465061973ULL;
_Bool var_26 = (_Bool)0;
long long int var_27 = 8609370012220877519LL;
unsigned int var_28 = 746796788U;
short var_29 = (short)-8234;
unsigned long long int var_30 = 16508396649345060640ULL;
_Bool arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
signed char arr_8 [20] [20] [20] [20] [20] [20] ;
signed char arr_12 [20] [20] [20] ;
unsigned long long int arr_13 [20] [20] ;
unsigned char arr_18 [11] [11] ;
unsigned long long int arr_15 [20] [20] [20] ;
int arr_19 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9097148744229127305ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 12136087967388971985ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = 2704879221187016183ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2105828155204764443ULL : 13092940107680932044ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = -1740033955;
}

void checksum() {
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
