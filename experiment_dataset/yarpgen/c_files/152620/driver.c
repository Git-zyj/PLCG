#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
unsigned char var_3 = (unsigned char)25;
short var_4 = (short)-26517;
unsigned long long int var_6 = 10809222248092614921ULL;
int var_12 = 1656702112;
int zero = 0;
unsigned int var_13 = 504123024U;
short var_14 = (short)4488;
short var_15 = (short)11750;
unsigned char var_16 = (unsigned char)160;
unsigned int var_17 = 3573609692U;
unsigned long long int arr_1 [23] ;
long long int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_4 [23] ;
short arr_5 [23] [23] [23] ;
unsigned int arr_6 [23] [23] ;
short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1168360690506739351ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4783089316725742760LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 17776354661673844770ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 15290570305228125314ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-15470 : (short)23605;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 3390033398U : 1673516905U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)25672 : (short)-26283;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
