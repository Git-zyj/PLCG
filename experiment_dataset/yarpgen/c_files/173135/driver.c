#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 514498906;
_Bool var_3 = (_Bool)1;
long long int var_7 = 7317935664207756210LL;
unsigned long long int var_8 = 14473621284410689504ULL;
int var_9 = -1336264123;
int var_14 = 1836274590;
int zero = 0;
short var_17 = (short)-28002;
long long int var_18 = 5836767094878947524LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)15726;
unsigned long long int var_21 = 3856814091776953927ULL;
_Bool var_22 = (_Bool)0;
int arr_4 [19] ;
int arr_6 [19] [19] [19] ;
long long int arr_8 [19] [19] [19] [19] ;
unsigned short arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2117162039;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -889692228;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3966484280578776328LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned short)21315;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
