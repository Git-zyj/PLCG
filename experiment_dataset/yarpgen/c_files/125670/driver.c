#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
_Bool var_2 = (_Bool)0;
int var_4 = -165245307;
signed char var_6 = (signed char)53;
unsigned char var_7 = (unsigned char)76;
int var_9 = -1125094701;
unsigned long long int var_11 = 15476857736381577728ULL;
int var_13 = -507378548;
int var_14 = 1631103082;
int zero = 0;
long long int var_16 = -7703909577570419275LL;
signed char var_17 = (signed char)32;
long long int var_18 = 7432643510894648624LL;
signed char var_19 = (signed char)55;
signed char var_20 = (signed char)-110;
unsigned long long int var_21 = 3039152614853083102ULL;
int arr_0 [13] ;
unsigned char arr_2 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1480350244;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
