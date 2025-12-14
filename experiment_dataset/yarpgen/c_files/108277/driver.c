#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 495029108;
short var_7 = (short)29817;
int var_12 = 376607212;
long long int var_14 = -3205988147301125622LL;
unsigned long long int var_17 = 5424682418325739194ULL;
unsigned long long int var_19 = 3167558117985813961ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1190595067;
long long int var_22 = -1980699001792175218LL;
long long int var_23 = -4539874146142964763LL;
short var_24 = (short)-13843;
long long int var_25 = 2487905959101905316LL;
unsigned char var_26 = (unsigned char)186;
int var_27 = 1895945132;
int var_28 = 680516712;
int arr_2 [14] ;
unsigned long long int arr_4 [14] ;
unsigned long long int arr_11 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -1302333017;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 16719372025363212689ULL : 6129365243553032827ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 12348779365434769775ULL : 11301547994409077415ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
