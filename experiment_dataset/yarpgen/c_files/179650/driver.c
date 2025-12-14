#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14073087397251410779ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)158;
int zero = 0;
unsigned short var_10 = (unsigned short)3435;
unsigned int var_11 = 671318863U;
unsigned long long int var_12 = 7250982203613946500ULL;
unsigned long long int var_13 = 7742094073258278462ULL;
unsigned long long int var_14 = 16786205893390195439ULL;
unsigned short var_15 = (unsigned short)11744;
unsigned short arr_5 [18] ;
unsigned char arr_7 [18] ;
_Bool arr_8 [18] [18] [18] [18] [18] [18] ;
long long int arr_12 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)34659;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4217567396207780301LL : -13926369357557852LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
