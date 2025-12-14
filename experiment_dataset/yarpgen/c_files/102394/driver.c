#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1084838869U;
unsigned long long int var_1 = 14551047940129152927ULL;
unsigned char var_5 = (unsigned char)15;
unsigned int var_6 = 480725496U;
int var_7 = -230419262;
unsigned short var_8 = (unsigned short)40984;
unsigned int var_9 = 513686323U;
int zero = 0;
int var_11 = 814068272;
unsigned short var_12 = (unsigned short)57080;
unsigned long long int var_13 = 18322760875832593650ULL;
unsigned char var_14 = (unsigned char)79;
unsigned int var_15 = 1220978647U;
int var_16 = 1171439416;
int arr_9 [21] ;
unsigned int arr_10 [21] ;
unsigned short arr_12 [21] [21] ;
unsigned int arr_13 [21] [21] [21] ;
unsigned int arr_14 [21] ;
unsigned short arr_6 [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = -1442325703;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 3650433924U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)48628;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3315094733U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 3311629747U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)20759;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 16928270529167723736ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
