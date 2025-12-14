#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3907438052906210783LL;
long long int var_4 = 8233270520374821476LL;
long long int var_7 = 5938719696632298856LL;
long long int var_10 = 584079349664644913LL;
long long int var_13 = 3702738227803340191LL;
long long int var_14 = 1003596323845711237LL;
long long int var_16 = -396447863181708712LL;
int zero = 0;
long long int var_17 = -1975895837733948420LL;
long long int var_18 = 7629384543215263787LL;
long long int var_19 = -696207132388274313LL;
long long int var_20 = 5545468219820214844LL;
long long int var_21 = 5736591880847357843LL;
long long int var_22 = -2533361163539728138LL;
long long int var_23 = 7325426888138055595LL;
long long int var_24 = 2018527643883119351LL;
long long int var_25 = 6792514576729461634LL;
long long int arr_1 [22] [22] ;
long long int arr_2 [22] ;
long long int arr_3 [22] ;
long long int arr_6 [20] ;
long long int arr_7 [20] ;
long long int arr_15 [13] [13] ;
long long int arr_4 [22] [22] ;
long long int arr_5 [22] [22] ;
long long int arr_11 [13] ;
long long int arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -7941717850598836722LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3193836823194894851LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -8782867136670929330LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -5573563853832447141LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -8078118898123626874LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 7169133570475712673LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -1802792251314098473LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 3141477459579757503LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -5381373590886040589LL : 2202861089768221348LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -7400143867728927438LL : 821424845213088524LL;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
