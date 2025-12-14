#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
signed char var_1 = (signed char)-106;
unsigned long long int var_3 = 176254381106462643ULL;
signed char var_4 = (signed char)58;
unsigned int var_5 = 2172341863U;
short var_7 = (short)18992;
unsigned int var_8 = 3183887932U;
signed char var_9 = (signed char)31;
int zero = 0;
signed char var_11 = (signed char)43;
short var_12 = (short)-4976;
signed char var_13 = (signed char)98;
unsigned int var_14 = 1694326794U;
short var_15 = (short)-27224;
unsigned char var_16 = (unsigned char)120;
unsigned long long int var_17 = 1126469524219140400ULL;
unsigned char arr_1 [14] ;
unsigned char arr_2 [14] [14] ;
unsigned long long int arr_7 [14] ;
signed char arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 15917707265094714682ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)36 : (signed char)-14;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
