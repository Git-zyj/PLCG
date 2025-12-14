#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3882971694151920865LL;
unsigned long long int var_2 = 1899240016540617323ULL;
unsigned int var_3 = 3431357314U;
unsigned int var_5 = 1996650547U;
unsigned int var_6 = 3221240016U;
unsigned int var_7 = 3627537285U;
signed char var_8 = (signed char)4;
unsigned int var_10 = 639195457U;
unsigned long long int var_11 = 9933575683374149055ULL;
int var_12 = 451657152;
int zero = 0;
long long int var_13 = -2162892394778725584LL;
unsigned int var_14 = 4197638390U;
unsigned short var_15 = (unsigned short)41006;
unsigned int var_16 = 2477315759U;
unsigned char arr_10 [22] [22] ;
long long int arr_11 [22] ;
unsigned long long int arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)55 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 7901002313832404008LL : 7995802946382481391LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 9294825185280684383ULL : 7531280363291054079ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
