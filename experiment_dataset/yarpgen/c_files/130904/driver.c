#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3234413031U;
unsigned char var_1 = (unsigned char)103;
long long int var_2 = 7327077730472278310LL;
unsigned int var_3 = 3996064799U;
signed char var_4 = (signed char)97;
long long int var_5 = 1651283500202657211LL;
int var_6 = -488472929;
long long int var_8 = 5463924754150965827LL;
int var_9 = -1616981235;
unsigned char var_10 = (unsigned char)79;
signed char var_11 = (signed char)-126;
long long int var_12 = 20185737252087734LL;
int zero = 0;
unsigned long long int var_13 = 18210563341317952350ULL;
int var_14 = 132364786;
long long int var_15 = -3202990375153858084LL;
int var_16 = 1560964046;
unsigned int var_17 = 1137295271U;
unsigned int var_18 = 671366705U;
int var_19 = -2045455880;
short var_20 = (short)-292;
int var_21 = 696909651;
unsigned char arr_3 [25] [25] [25] ;
unsigned int arr_5 [25] [25] [25] ;
unsigned long long int arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2431569139U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 12485435372065806488ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
