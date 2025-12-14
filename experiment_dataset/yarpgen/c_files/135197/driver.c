#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 541982393U;
unsigned char var_3 = (unsigned char)79;
unsigned long long int var_5 = 5636155641387777090ULL;
unsigned int var_7 = 2223883846U;
unsigned long long int var_9 = 4993699105555697054ULL;
unsigned long long int var_10 = 17169422013498375904ULL;
unsigned long long int var_12 = 17884963020028761597ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)6;
unsigned char var_15 = (unsigned char)121;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-123;
short var_18 = (short)26224;
unsigned int var_19 = 4234939921U;
short arr_0 [13] ;
signed char arr_1 [13] ;
signed char arr_2 [13] ;
unsigned long long int arr_4 [13] [13] ;
long long int arr_5 [13] [13] [13] ;
unsigned char arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-15602;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 7036843585265982836ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5965938912916434981LL : -3287892647586393374LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)73 : (unsigned char)120;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
