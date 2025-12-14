#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 749232705038022142LL;
long long int var_1 = -9176277420826256844LL;
long long int var_2 = -6924467857336787427LL;
long long int var_3 = 4986600152626148529LL;
long long int var_4 = -2079877344198779175LL;
long long int var_5 = 1718618466028125740LL;
long long int var_7 = 2385129708250949730LL;
long long int var_8 = 1468323290743849689LL;
long long int var_10 = -674560883772111640LL;
long long int var_11 = 1388030880982514600LL;
long long int var_12 = 2425256683828432906LL;
int zero = 0;
long long int var_13 = 3783501462744752976LL;
long long int var_14 = 5742282958756452288LL;
long long int var_15 = 399713544213726042LL;
long long int var_16 = 5311578559463355445LL;
long long int var_17 = 899123175012971699LL;
long long int var_18 = -404529912791636923LL;
long long int arr_0 [10] [10] ;
long long int arr_1 [10] ;
long long int arr_2 [10] ;
long long int arr_4 [10] ;
long long int arr_5 [10] ;
long long int arr_6 [10] [10] ;
long long int arr_7 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -153911938726648374LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3048716310466321161LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2103957594825973155LL : 2137957605685594876LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -4898849246655005943LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 3303580152639420851LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 8713364618238309956LL : -14962027141470401LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8507655609915412952LL : -1179749705559453877LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
