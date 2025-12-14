#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17824228707003234417ULL;
signed char var_2 = (signed char)8;
unsigned int var_3 = 1752148078U;
int var_4 = 2075768537;
int var_5 = -974352839;
int var_6 = 1055595501;
int var_7 = -2146527195;
unsigned char var_8 = (unsigned char)62;
short var_9 = (short)-8412;
int var_10 = -1329870370;
int zero = 0;
unsigned char var_11 = (unsigned char)80;
signed char var_12 = (signed char)-57;
signed char var_13 = (signed char)-2;
int var_14 = 1891268600;
short var_15 = (short)-22481;
_Bool var_16 = (_Bool)1;
unsigned long long int arr_1 [11] ;
unsigned char arr_11 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 11946320906601491648ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)205;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
