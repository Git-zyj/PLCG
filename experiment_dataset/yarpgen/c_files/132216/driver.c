#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1036172606;
unsigned short var_1 = (unsigned short)43790;
unsigned short var_2 = (unsigned short)32604;
unsigned int var_4 = 3724290640U;
int var_6 = -3275977;
unsigned int var_10 = 3211113826U;
int var_11 = -1257272703;
int var_12 = 142858084;
unsigned long long int var_13 = 6840726360487406520ULL;
short var_16 = (short)25308;
int zero = 0;
unsigned char var_18 = (unsigned char)83;
unsigned short var_19 = (unsigned short)54468;
_Bool var_20 = (_Bool)0;
unsigned int arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned int arr_2 [24] ;
int arr_3 [24] ;
unsigned char arr_4 [24] ;
unsigned char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1527779231U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1824109968U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 626341314U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -300883605;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)188;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
