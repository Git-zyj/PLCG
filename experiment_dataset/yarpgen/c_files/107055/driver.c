#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24881;
unsigned short var_1 = (unsigned short)47272;
short var_2 = (short)-3869;
signed char var_3 = (signed char)87;
short var_5 = (short)-23300;
unsigned char var_6 = (unsigned char)211;
unsigned char var_7 = (unsigned char)164;
unsigned short var_8 = (unsigned short)38301;
unsigned char var_9 = (unsigned char)95;
unsigned char var_11 = (unsigned char)123;
unsigned char var_12 = (unsigned char)250;
unsigned char var_13 = (unsigned char)34;
short var_14 = (short)-22111;
unsigned char var_17 = (unsigned char)5;
int zero = 0;
unsigned char var_18 = (unsigned char)218;
long long int var_19 = 846439290070425494LL;
short var_20 = (short)21703;
unsigned char var_21 = (unsigned char)230;
short var_22 = (short)27901;
short var_23 = (short)-30920;
long long int var_24 = 766457200831331914LL;
long long int arr_3 [10] [10] ;
unsigned short arr_4 [10] ;
unsigned char arr_11 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 5141142986278598828LL : 6467094291927038860LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44431 : (unsigned short)20995;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)44;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
