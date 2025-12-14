#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)189;
long long int var_5 = -8445256318625543809LL;
int var_6 = -1004270014;
unsigned char var_7 = (unsigned char)63;
short var_9 = (short)16071;
int var_11 = 826949842;
int var_13 = -1099309795;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 4555920498212782083ULL;
unsigned char var_17 = (unsigned char)126;
int zero = 0;
short var_19 = (short)-8661;
signed char var_20 = (signed char)121;
signed char var_21 = (signed char)107;
long long int arr_0 [17] ;
int arr_1 [17] ;
long long int arr_4 [17] ;
unsigned char arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1241674704410872618LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -879450195;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2030288963197502192LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)190;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
