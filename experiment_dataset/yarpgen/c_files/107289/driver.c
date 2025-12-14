#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -79620330412055315LL;
long long int var_5 = -5045171619487334291LL;
long long int var_7 = -6430036388078624071LL;
int zero = 0;
long long int var_11 = 3133139815680887849LL;
long long int var_12 = -2744214923618029676LL;
long long int var_13 = 7468872934828282448LL;
long long int var_14 = -5863242130876667227LL;
long long int var_15 = -968624529543469520LL;
long long int var_16 = -5173323945320138900LL;
long long int var_17 = 4585555448191990541LL;
long long int var_18 = -4631285072958114854LL;
long long int var_19 = -3511234889550824830LL;
long long int var_20 = 6528720161175313709LL;
long long int var_21 = 3682417281924885865LL;
long long int var_22 = 7120227663865386107LL;
long long int var_23 = 4701884382215612153LL;
long long int arr_9 [23] [23] [23] [23] [23] [23] ;
long long int arr_14 [23] ;
long long int arr_15 [23] ;
long long int arr_16 [23] [23] [23] [23] [23] ;
long long int arr_17 [23] [23] [23] ;
long long int arr_18 [23] ;
long long int arr_19 [23] ;
long long int arr_22 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4556210111264408045LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 6424850358640095129LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = -3408200665280273308LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -6578576339660883828LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -2748912058930082139LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 5383131132162385343LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 3909795332707420028LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 9084399910151469946LL : 5101434157372390799LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
