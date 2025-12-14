#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3924098336818422081LL;
unsigned char var_1 = (unsigned char)139;
unsigned short var_2 = (unsigned short)33330;
unsigned int var_3 = 3272468384U;
int var_4 = 1840302430;
signed char var_5 = (signed char)114;
signed char var_6 = (signed char)38;
int var_7 = 1343071460;
int var_8 = 601105657;
short var_9 = (short)-12853;
signed char var_11 = (signed char)-49;
unsigned int var_12 = 768255564U;
unsigned short var_13 = (unsigned short)4577;
unsigned char var_14 = (unsigned char)27;
unsigned short var_15 = (unsigned short)14175;
int zero = 0;
signed char var_16 = (signed char)-27;
signed char var_17 = (signed char)-100;
int var_18 = -1784210973;
unsigned int var_19 = 3442646994U;
long long int var_20 = -5396600798721496233LL;
signed char var_21 = (signed char)43;
long long int var_22 = 6790307036988955453LL;
short var_23 = (short)-19487;
signed char arr_6 [25] [25] ;
unsigned short arr_7 [25] ;
signed char arr_14 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)35341;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-45;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
