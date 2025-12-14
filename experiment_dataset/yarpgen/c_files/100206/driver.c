#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1994992214;
unsigned int var_1 = 2066373121U;
short var_6 = (short)-10507;
unsigned char var_7 = (unsigned char)191;
unsigned char var_9 = (unsigned char)204;
long long int var_10 = 5353206658522595559LL;
unsigned long long int var_13 = 1034140566526561575ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)11;
unsigned short var_19 = (unsigned short)19320;
unsigned short var_20 = (unsigned short)6613;
long long int var_21 = -7096448566201883385LL;
unsigned char arr_1 [25] ;
unsigned long long int arr_2 [25] [25] ;
signed char arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 16005157946810979987ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
