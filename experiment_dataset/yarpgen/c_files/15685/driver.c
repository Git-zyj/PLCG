#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13940835979743077135ULL;
signed char var_6 = (signed char)77;
long long int var_9 = 4569158488340700945LL;
signed char var_11 = (signed char)116;
long long int var_18 = -1881135272410234388LL;
int zero = 0;
short var_19 = (short)11587;
int var_20 = -74171734;
signed char var_21 = (signed char)-108;
long long int var_22 = -7443490821967143106LL;
unsigned char var_23 = (unsigned char)90;
signed char var_24 = (signed char)45;
unsigned int var_25 = 538490454U;
signed char var_26 = (signed char)-86;
short var_27 = (short)-32325;
unsigned short arr_2 [15] [15] ;
_Bool arr_3 [15] [15] ;
unsigned long long int arr_6 [15] [15] [15] [15] ;
int arr_8 [15] [15] [15] [15] ;
short arr_9 [15] ;
long long int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)55368;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2297589226104849367ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -85027059;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (short)-13408;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 1322599597548506857LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
