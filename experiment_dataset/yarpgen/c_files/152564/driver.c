#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5318533086097702243LL;
long long int var_5 = -6881091263665782348LL;
unsigned short var_7 = (unsigned short)24367;
_Bool var_8 = (_Bool)0;
int var_9 = -1712640196;
long long int var_11 = -1097446326794640764LL;
unsigned long long int var_13 = 12481057717803706915ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 864775708658325692ULL;
short var_17 = (short)938;
unsigned long long int var_18 = 16381761719946775636ULL;
unsigned short var_19 = (unsigned short)61021;
long long int var_20 = 2260103631747848702LL;
signed char var_21 = (signed char)-118;
unsigned int var_22 = 849724138U;
long long int var_23 = 2816495216159597911LL;
unsigned long long int var_24 = 5576756447593737022ULL;
int var_25 = 432970684;
long long int var_26 = -6889754519546529497LL;
long long int var_27 = 1896238248806734327LL;
signed char arr_14 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_23 [16] [16] [16] ;
long long int arr_24 [16] ;
unsigned short arr_25 [16] ;
long long int arr_28 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned short)845;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = -3522154668663586983LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (unsigned short)29763;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_28 [i_0] [i_1] = -940505590792698733LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
