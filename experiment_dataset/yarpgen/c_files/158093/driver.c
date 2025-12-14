#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5807447718830487462ULL;
int var_1 = -696908720;
unsigned long long int var_2 = 15875178239524314361ULL;
signed char var_4 = (signed char)-6;
unsigned long long int var_5 = 5251716924802091701ULL;
unsigned char var_8 = (unsigned char)234;
long long int var_9 = -2872769070467296712LL;
unsigned int var_10 = 3073571369U;
int zero = 0;
long long int var_11 = 4874218925165087270LL;
int var_12 = -1458017659;
unsigned char var_13 = (unsigned char)158;
int var_14 = -2090043319;
unsigned long long int var_15 = 11723271609016790069ULL;
signed char var_16 = (signed char)40;
unsigned long long int arr_1 [18] [18] ;
unsigned char arr_2 [18] [18] ;
signed char arr_4 [18] ;
signed char arr_6 [18] [18] [18] [18] ;
long long int arr_7 [18] [18] [18] ;
long long int arr_9 [18] [18] [18] [18] ;
unsigned int arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 15771439431692019477ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 7232313031028856365LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 842561543679496461LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 2007759777U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
