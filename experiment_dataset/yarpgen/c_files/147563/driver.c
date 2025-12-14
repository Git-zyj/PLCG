#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)152;
unsigned int var_5 = 3076218567U;
long long int var_7 = -7699897307850165355LL;
int var_9 = -2037002526;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_16 = (short)-194;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)12425;
unsigned long long int var_19 = 4436614804983712327ULL;
short var_20 = (short)22810;
unsigned short var_21 = (unsigned short)13673;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1334656167U;
int arr_0 [12] [12] ;
signed char arr_1 [12] ;
unsigned int arr_4 [20] [20] [20] ;
signed char arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -111420054;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 755055435U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)33;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
