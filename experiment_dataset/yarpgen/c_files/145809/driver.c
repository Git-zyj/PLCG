#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5059524685775937295LL;
unsigned long long int var_4 = 6951751146009588731ULL;
unsigned int var_9 = 2788273733U;
long long int var_10 = -3046716304656819849LL;
int zero = 0;
int var_11 = -428669577;
signed char var_12 = (signed char)39;
signed char var_13 = (signed char)46;
signed char var_14 = (signed char)5;
long long int arr_0 [16] [16] ;
signed char arr_1 [16] ;
unsigned int arr_3 [16] ;
unsigned int arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -1076301791529318036LL : -8189763483766010897LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1667749797U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2700075302U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
