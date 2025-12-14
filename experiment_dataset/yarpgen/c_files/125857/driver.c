#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)221;
unsigned char var_3 = (unsigned char)136;
unsigned char var_5 = (unsigned char)75;
unsigned char var_6 = (unsigned char)78;
unsigned char var_7 = (unsigned char)70;
unsigned char var_8 = (unsigned char)110;
unsigned char var_9 = (unsigned char)141;
unsigned char var_12 = (unsigned char)135;
unsigned char var_13 = (unsigned char)243;
unsigned char var_15 = (unsigned char)223;
int zero = 0;
unsigned char var_16 = (unsigned char)228;
unsigned char var_17 = (unsigned char)175;
unsigned char var_18 = (unsigned char)195;
unsigned char var_19 = (unsigned char)106;
unsigned char arr_7 [23] ;
unsigned char arr_8 [23] [23] ;
unsigned char arr_14 [20] ;
unsigned char arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)86 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned char)77;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
