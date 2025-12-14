#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)60548;
unsigned long long int var_5 = 5298453635263856022ULL;
long long int var_14 = 710667751029685113LL;
unsigned long long int var_15 = 15402395898393915470ULL;
int zero = 0;
signed char var_18 = (signed char)2;
unsigned long long int var_19 = 1579354893378292093ULL;
unsigned char var_20 = (unsigned char)140;
unsigned long long int var_21 = 2497834532027619550ULL;
unsigned char var_22 = (unsigned char)156;
signed char var_23 = (signed char)-127;
long long int var_24 = 4756899580888049714LL;
short var_25 = (short)-32446;
unsigned long long int var_26 = 7780217122658936226ULL;
short arr_1 [20] ;
unsigned char arr_4 [20] [20] [20] ;
unsigned long long int arr_6 [20] [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] [20] ;
unsigned long long int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)31505;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 8643551524530860843ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 638307330449060144ULL : 736009484569611819ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 3965625710418532932ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
