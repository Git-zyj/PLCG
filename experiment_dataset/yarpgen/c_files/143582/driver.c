#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned long long int var_2 = 13892382902454064605ULL;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 9148184947139049300ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_10 = -5983284554507841549LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 702461136U;
short var_13 = (short)5732;
int var_14 = -350912400;
signed char arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
_Bool arr_4 [20] ;
short arr_5 [20] [20] [20] [20] ;
_Bool arr_8 [20] [20] ;
unsigned int arr_9 [20] [20] [20] [20] [20] [20] ;
_Bool arr_10 [20] [20] [20] ;
unsigned int arr_11 [20] [20] ;
int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1375716549U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 12840087428323560102ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)116;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3006712493U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 313466773U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = -998085719;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
