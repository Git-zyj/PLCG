#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1488780457;
unsigned char var_2 = (unsigned char)87;
int var_5 = -667619157;
unsigned char var_7 = (unsigned char)164;
unsigned int var_8 = 855774473U;
unsigned int var_11 = 2216145217U;
short var_12 = (short)10080;
unsigned char var_13 = (unsigned char)84;
short var_14 = (short)11971;
int zero = 0;
long long int var_15 = 286953639480962565LL;
signed char var_16 = (signed char)-112;
unsigned long long int var_17 = 15056987054848184198ULL;
unsigned short var_18 = (unsigned short)44183;
unsigned char var_19 = (unsigned char)157;
unsigned long long int var_20 = 18237831499590926984ULL;
unsigned long long int var_21 = 11353037795989361752ULL;
short arr_0 [15] ;
unsigned long long int arr_3 [15] ;
signed char arr_4 [15] ;
unsigned long long int arr_5 [15] [15] ;
unsigned char arr_6 [15] [15] [15] ;
signed char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)17343;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 15022636159508492617ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 17943058496972147709ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)71 : (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-27 : (signed char)112;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
