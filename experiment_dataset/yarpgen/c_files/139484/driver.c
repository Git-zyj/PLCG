#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1110266010U;
int var_1 = 1224474647;
unsigned char var_2 = (unsigned char)74;
short var_3 = (short)-23594;
unsigned char var_6 = (unsigned char)75;
unsigned int var_8 = 1664795620U;
short var_9 = (short)-21564;
int var_11 = 1370748348;
int var_12 = 327654889;
int var_13 = -700354504;
_Bool var_14 = (_Bool)0;
long long int var_16 = 3862765446098741237LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)55;
unsigned char var_19 = (unsigned char)25;
_Bool var_20 = (_Bool)1;
long long int var_21 = -4650525317348012510LL;
unsigned long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
signed char arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8138417056012770207ULL : 17148847222592761951ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)116 : (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 15732087612882008382ULL : 2820665268473918925ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
