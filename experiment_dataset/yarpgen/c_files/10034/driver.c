#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
unsigned int var_4 = 3343266385U;
unsigned char var_5 = (unsigned char)40;
unsigned short var_9 = (unsigned short)50650;
_Bool var_11 = (_Bool)1;
long long int var_13 = -8055590175565350143LL;
int zero = 0;
long long int var_15 = 1199151110289403352LL;
signed char var_16 = (signed char)28;
unsigned char var_17 = (unsigned char)53;
short var_18 = (short)6747;
unsigned long long int var_19 = 5349171654795888432ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_0 [25] ;
int arr_1 [25] ;
unsigned int arr_8 [25] ;
unsigned short arr_10 [25] [25] [25] ;
short arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 11726860379926185209ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 5966579;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 3481990989U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)46538;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-22723;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
