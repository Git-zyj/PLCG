#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 1343012416U;
unsigned long long int var_7 = 3068885575962277172ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1082891120U;
long long int var_11 = -8577797276801972138LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5008543876517802057ULL;
int zero = 0;
unsigned long long int var_17 = 3887261690681479599ULL;
signed char var_18 = (signed char)107;
unsigned char var_19 = (unsigned char)126;
long long int var_20 = -7466305131789286459LL;
unsigned int var_21 = 2481789159U;
unsigned short var_22 = (unsigned short)46358;
unsigned int arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
unsigned short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1792831445U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 13629371178771011485ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58923 : (unsigned short)17036;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
