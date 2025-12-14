#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9043;
unsigned short var_2 = (unsigned short)12286;
unsigned char var_4 = (unsigned char)183;
short var_7 = (short)-25855;
unsigned int var_9 = 4071237052U;
int zero = 0;
unsigned long long int var_13 = 15980876494341146074ULL;
long long int var_14 = 7312499339593733947LL;
unsigned short var_15 = (unsigned short)62012;
int var_16 = 2126367577;
unsigned short var_17 = (unsigned short)15302;
unsigned int var_18 = 37804508U;
unsigned short var_19 = (unsigned short)21411;
unsigned short arr_5 [25] ;
unsigned int arr_10 [25] [25] ;
unsigned char arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)43326;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 1754428749U : 3471351974U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)77 : (unsigned char)167;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
