#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)19;
long long int var_2 = 3753478466778970595LL;
signed char var_5 = (signed char)117;
short var_13 = (short)21938;
unsigned char var_15 = (unsigned char)124;
unsigned short var_16 = (unsigned short)59153;
int zero = 0;
unsigned short var_18 = (unsigned short)14668;
short var_19 = (short)22208;
signed char var_20 = (signed char)25;
unsigned short var_21 = (unsigned short)50153;
unsigned short var_22 = (unsigned short)61177;
long long int var_23 = -6784248951864595483LL;
short var_24 = (short)5539;
unsigned char arr_0 [16] ;
long long int arr_1 [16] [16] ;
short arr_2 [16] [16] ;
unsigned short arr_4 [16] [16] [16] ;
int arr_6 [11] ;
unsigned char arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 3028010457041255277LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)21568;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)46088;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -1180051703;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)16;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
