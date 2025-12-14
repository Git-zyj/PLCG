#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16900;
unsigned char var_1 = (unsigned char)158;
short var_3 = (short)20;
unsigned int var_4 = 15785119U;
unsigned int var_5 = 4100369398U;
unsigned long long int var_6 = 8850330632997455136ULL;
unsigned long long int var_9 = 13774345847041632658ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)41808;
int var_11 = -1313016642;
unsigned char var_12 = (unsigned char)103;
unsigned short var_13 = (unsigned short)14052;
short var_14 = (short)24528;
unsigned char var_15 = (unsigned char)86;
int arr_0 [19] ;
unsigned long long int arr_2 [19] ;
unsigned int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -998711656;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 546277239286555298ULL : 16637391260058942487ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2099461742U : 513495672U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
