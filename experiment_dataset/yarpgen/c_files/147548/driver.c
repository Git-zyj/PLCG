#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2134254418558160919LL;
unsigned long long int var_3 = 9056199658330250226ULL;
unsigned char var_4 = (unsigned char)184;
int var_6 = 78832600;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)87;
int var_12 = 867487951;
unsigned char var_13 = (unsigned char)172;
unsigned long long int var_14 = 453280035997014076ULL;
int var_15 = -576354546;
long long int var_16 = 5557869040790944647LL;
unsigned char arr_0 [25] ;
unsigned char arr_1 [25] ;
signed char arr_2 [25] ;
_Bool arr_3 [25] ;
short arr_7 [25] [25] [25] ;
unsigned char arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-30702;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)53;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
