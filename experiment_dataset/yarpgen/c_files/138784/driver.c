#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 9711230802973911554ULL;
signed char var_13 = (signed char)-51;
int zero = 0;
unsigned short var_20 = (unsigned short)25868;
long long int var_21 = -9018861373952010127LL;
unsigned long long int var_22 = 814219551351883435ULL;
unsigned int var_23 = 3057130362U;
unsigned long long int var_24 = 14115887198207862017ULL;
unsigned long long int var_25 = 13854282944236035388ULL;
long long int var_26 = 4834509368541090644LL;
unsigned char var_27 = (unsigned char)93;
unsigned int var_28 = 3942727447U;
short var_29 = (short)-23409;
unsigned char var_30 = (unsigned char)127;
unsigned short var_31 = (unsigned short)37772;
unsigned short var_32 = (unsigned short)53931;
short var_33 = (short)-24609;
_Bool arr_1 [18] ;
unsigned int arr_2 [22] [22] ;
int arr_3 [22] ;
unsigned int arr_4 [22] ;
signed char arr_6 [23] ;
short arr_8 [23] ;
unsigned long long int arr_9 [23] [23] ;
long long int arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2798437637U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -1785646832;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 2376555263U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)25915;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 17533806724957720276ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -7520674396537444024LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
