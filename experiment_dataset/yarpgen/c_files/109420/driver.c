#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4045089775754802378LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 5027972922286440671ULL;
unsigned short var_4 = (unsigned short)25206;
unsigned char var_5 = (unsigned char)10;
int var_6 = -1746139344;
unsigned char var_7 = (unsigned char)25;
unsigned short var_8 = (unsigned short)14060;
unsigned int var_12 = 488366446U;
int var_13 = -1849024693;
int var_14 = 1263671008;
int zero = 0;
unsigned long long int var_16 = 5420610318740302097ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)42;
unsigned long long int var_19 = 14357463881550645737ULL;
unsigned int var_20 = 3812026689U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -3400068502976577656LL;
unsigned int var_23 = 2480676938U;
long long int arr_3 [10] ;
int arr_8 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2310528951218120727LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2117537866 : -1561620108;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
