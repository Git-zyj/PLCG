#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 9554087776578889451ULL;
unsigned long long int var_3 = 11540488516084458606ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 4066313856515549796ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 12793799765417796625ULL;
unsigned long long int var_12 = 1677233807407880246ULL;
int zero = 0;
unsigned long long int var_13 = 13833216898955811520ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 567171704844234872ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7609563957604894183ULL;
unsigned long long int var_19 = 2374684079061594723ULL;
unsigned long long int var_20 = 9044371192000879998ULL;
unsigned long long int var_21 = 4199364539225309898ULL;
unsigned long long int var_22 = 4843843165695616640ULL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 3393956464694880907ULL;
unsigned long long int arr_1 [20] [20] ;
unsigned long long int arr_2 [20] ;
_Bool arr_5 [20] [20] ;
unsigned long long int arr_3 [20] [20] ;
unsigned long long int arr_9 [20] ;
unsigned long long int arr_10 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1403676439350471740ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 6180580185538727977ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 5036110152193159626ULL : 14950427427387215977ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4555328663665454744ULL : 16658725630732046926ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17812090299652473899ULL : 14054414382272039286ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
