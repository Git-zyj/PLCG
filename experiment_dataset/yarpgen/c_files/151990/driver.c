#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16633964230242109454ULL;
int var_1 = 405741397;
int var_4 = -217291412;
int var_5 = -1056578989;
int var_7 = 6566539;
int var_8 = 440199067;
int var_9 = -720507712;
int var_10 = 1942796476;
int var_11 = 2011070087;
unsigned long long int var_15 = 8558196982812396253ULL;
int zero = 0;
unsigned long long int var_17 = 7638309893090714846ULL;
unsigned long long int var_18 = 12914517742653175927ULL;
unsigned long long int var_19 = 12889181385175038750ULL;
int var_20 = 1646252601;
unsigned long long int var_21 = 14650591298714955280ULL;
int var_22 = -1987286239;
int var_23 = -1826567924;
int var_24 = -324599005;
unsigned long long int var_25 = 6012401841903782119ULL;
unsigned long long int var_26 = 10593328363407008381ULL;
int var_27 = 387466428;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
int arr_9 [13] ;
unsigned long long int arr_10 [13] [13] ;
int arr_4 [23] ;
unsigned long long int arr_7 [13] ;
unsigned long long int arr_12 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 12468953155263415240ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 10191050275970375977ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2192666086385663042ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4733118359897525230ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 1984281412;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 1628137345867885890ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -2086081908;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 10829380637980360775ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 1738342423906574126ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
