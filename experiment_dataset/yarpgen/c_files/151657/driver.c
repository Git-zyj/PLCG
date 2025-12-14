#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39924;
long long int var_2 = 8505326037511638740LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 2586142199046707422LL;
signed char var_12 = (signed char)-12;
int zero = 0;
short var_19 = (short)-17490;
unsigned long long int var_20 = 375750224264106730ULL;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_2 [19] ;
long long int arr_4 [19] ;
long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2002257750371716823ULL : 17641450272923989603ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9837497234992116717ULL : 3595128457943374980ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -459297359501830574LL : -5516098748267767376LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1238997713263054263LL : -1964906451830110848LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
