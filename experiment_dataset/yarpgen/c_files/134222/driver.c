#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1789212879;
unsigned short var_2 = (unsigned short)63370;
int var_5 = 1512896682;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 4123291305U;
unsigned int var_9 = 4199211376U;
int var_10 = -146980767;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int var_15 = 191333768;
int zero = 0;
unsigned int var_16 = 338878701U;
short var_17 = (short)-3004;
unsigned short var_18 = (unsigned short)54959;
short var_19 = (short)4085;
int var_20 = -766076382;
unsigned short var_21 = (unsigned short)63708;
short arr_9 [21] ;
unsigned int arr_2 [21] ;
unsigned int arr_12 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (short)18727;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1262338530U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 1353954691U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
