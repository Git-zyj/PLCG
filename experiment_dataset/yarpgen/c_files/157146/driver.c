#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8389713925699858075LL;
int var_3 = -1743631941;
signed char var_4 = (signed char)30;
long long int var_6 = -1031266510757188368LL;
unsigned char var_9 = (unsigned char)47;
int var_10 = 1765550095;
unsigned long long int var_11 = 4784104327968500211ULL;
unsigned char var_12 = (unsigned char)253;
int zero = 0;
short var_13 = (short)19979;
unsigned int var_14 = 2594568699U;
int var_15 = -1060473651;
unsigned int var_16 = 623139475U;
long long int var_17 = -3948975737180667474LL;
unsigned long long int var_18 = 2398939083786409626ULL;
unsigned long long int var_19 = 7890559543702412251ULL;
int arr_2 [12] ;
unsigned int arr_6 [12] [12] ;
long long int arr_9 [12] [12] ;
unsigned int arr_4 [12] ;
unsigned long long int arr_12 [12] [12] ;
unsigned short arr_13 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1678383273;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 3141483866U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 8817763095681000839LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2585671797U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = 15801612549138786779ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)31369;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
