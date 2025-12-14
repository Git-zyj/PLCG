#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3109773407U;
long long int var_7 = 8797068309957448830LL;
long long int var_8 = 1595318084945462634LL;
unsigned int var_10 = 2763971826U;
unsigned short var_12 = (unsigned short)9924;
int zero = 0;
unsigned int var_14 = 3829697573U;
unsigned short var_15 = (unsigned short)32667;
unsigned int var_16 = 1206743768U;
unsigned int var_17 = 3494435678U;
long long int var_18 = -1960854782215293LL;
unsigned short var_19 = (unsigned short)30330;
long long int var_20 = 4088775647005883542LL;
long long int arr_2 [21] ;
unsigned short arr_3 [21] [21] [21] ;
unsigned int arr_4 [18] ;
unsigned int arr_8 [18] [18] ;
long long int arr_9 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3158608642328004099LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)2726;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2869984888U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 2810007306U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -7288543198106077513LL : -6342840210280304341LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
