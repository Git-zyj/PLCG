#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3948;
long long int var_2 = 5412683539222850161LL;
short var_4 = (short)-8342;
short var_6 = (short)-9449;
unsigned long long int var_7 = 9746522901164848516ULL;
signed char var_11 = (signed char)67;
short var_14 = (short)-5200;
signed char var_15 = (signed char)127;
long long int var_16 = -4500459636750484397LL;
unsigned short var_18 = (unsigned short)596;
int zero = 0;
unsigned char var_19 = (unsigned char)21;
unsigned int var_20 = 1750983062U;
short var_21 = (short)32507;
unsigned int var_22 = 1001662091U;
unsigned short var_23 = (unsigned short)29008;
long long int arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
short arr_4 [21] ;
short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 418742585630409767LL : 5089015253630270928LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)21964 : (unsigned short)65074;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-12204 : (short)4347;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)26359 : (short)1271;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
