#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2954744630722511172LL;
long long int var_2 = -8674327600947130420LL;
long long int var_3 = -7677369621172686693LL;
long long int var_4 = -9060523372876368646LL;
long long int var_6 = 7010092558497348008LL;
long long int var_7 = 6075533395785250005LL;
long long int var_8 = -2723712754028674760LL;
long long int var_9 = 2592529931821162038LL;
long long int var_11 = 3861536200128714156LL;
long long int var_12 = -6947909631702601198LL;
int zero = 0;
long long int var_13 = -1104484892439247363LL;
long long int var_14 = -1234664890336212275LL;
long long int var_15 = -7631644070967631474LL;
long long int var_16 = -993813978018455927LL;
long long int var_17 = 8045572282068069053LL;
long long int var_18 = -4539462375285147030LL;
long long int var_19 = 7598640134682422971LL;
long long int var_20 = 8451083043639729290LL;
long long int var_21 = 6361675181211439882LL;
long long int var_22 = -4492996397520223191LL;
long long int var_23 = 5897505065793849636LL;
long long int var_24 = 8933951844326250584LL;
long long int var_25 = -7248427231851254004LL;
long long int var_26 = 7801926739523052841LL;
long long int var_27 = 6755441248926538570LL;
long long int var_28 = -5382297400818972044LL;
long long int arr_0 [15] ;
long long int arr_1 [15] ;
long long int arr_2 [15] ;
long long int arr_6 [14] [14] ;
long long int arr_7 [14] [14] ;
long long int arr_8 [14] [14] ;
long long int arr_11 [14] [14] [14] ;
long long int arr_15 [14] [14] [14] [14] ;
long long int arr_19 [14] [14] [14] ;
long long int arr_21 [16] [16] ;
long long int arr_22 [16] [16] ;
long long int arr_3 [15] ;
long long int arr_4 [15] ;
long long int arr_20 [14] ;
long long int arr_23 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6327600844303149051LL : 6371246769071949378LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -7281000178647153245LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1285245134812919512LL : 3474435621596438669LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 8772574525098699176LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 8640267167440862328LL : -5790255211563055819LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = -1876113261334760927LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6312592918500804507LL : 7996192629168957973LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 9018984744859662862LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2379460566583218689LL : -1322143346301847873LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = -5515316563455438318LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = -2657049977370744985LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2079859234939158218LL : 7661615794507970096LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -947470085612949079LL : -871420691385914094LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -72188677109566566LL : -6097992607106526473LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = -1995897004382131170LL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
