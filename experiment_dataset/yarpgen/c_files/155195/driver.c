#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2091032799;
int var_1 = 755382026;
int var_2 = 864716348;
int var_5 = -199817120;
long long int var_6 = 6587597592929324852LL;
long long int var_7 = 6195629268448494167LL;
int var_8 = -564900407;
int var_9 = -1702657902;
long long int var_10 = 7186791326679702740LL;
int zero = 0;
int var_11 = 2058101133;
long long int var_12 = -2843720498360263871LL;
long long int var_13 = 7226247529844970739LL;
int var_14 = 1512282271;
int var_15 = -280502978;
int var_16 = 1634414338;
long long int var_17 = -3532185959756909014LL;
int var_18 = 1132769772;
long long int var_19 = 3560386310069506560LL;
long long int var_20 = -8686356199293130603LL;
int arr_0 [13] [13] ;
int arr_1 [13] ;
long long int arr_3 [17] ;
long long int arr_4 [17] [17] ;
int arr_5 [17] ;
int arr_7 [17] [17] ;
int arr_8 [17] [17] [17] ;
long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -1506262607;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1766375896;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -719771031390338428LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -6745302380530992467LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1643020004;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 1203785437;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 505854652;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 8598377053335245002LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
