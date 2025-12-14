#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -964149068;
long long int var_1 = -3238415452283539159LL;
long long int var_2 = 2278654689969514782LL;
int var_3 = -587043883;
int var_4 = -1282244559;
int var_5 = 1987999908;
long long int var_7 = -2878671558720368395LL;
unsigned long long int var_13 = 8592602281665178851ULL;
unsigned long long int var_14 = 7758304259164544797ULL;
int zero = 0;
signed char var_16 = (signed char)15;
unsigned char var_17 = (unsigned char)154;
long long int var_18 = 3258021318735973156LL;
int var_19 = 1637208478;
long long int var_20 = 1479924886735508675LL;
long long int var_21 = -3451980683824631441LL;
long long int var_22 = -7157740723660208248LL;
long long int arr_0 [18] ;
unsigned short arr_6 [18] [18] [18] [18] ;
int arr_9 [11] [11] ;
unsigned char arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -8259775371461627759LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42218;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 630223893 : 1020289329;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)150 : (unsigned char)29;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
