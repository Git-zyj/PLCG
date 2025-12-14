#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
unsigned long long int var_2 = 5203678307598771787ULL;
long long int var_3 = 4449968121549830754LL;
unsigned short var_4 = (unsigned short)62298;
unsigned short var_5 = (unsigned short)32509;
unsigned long long int var_6 = 18196950925092757011ULL;
unsigned int var_7 = 3054389096U;
short var_8 = (short)4938;
unsigned long long int var_11 = 1713332710432223394ULL;
unsigned long long int var_12 = 6670014716642878411ULL;
long long int var_13 = 8313886913486071845LL;
short var_15 = (short)17681;
short var_16 = (short)-14258;
unsigned int var_17 = 2223667555U;
int zero = 0;
int var_18 = 106936668;
unsigned char var_19 = (unsigned char)69;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9978574958639400638ULL;
short var_22 = (short)-19690;
unsigned long long int var_23 = 14344685475506392260ULL;
unsigned long long int var_24 = 3892559568203145574ULL;
unsigned int var_25 = 1013040945U;
unsigned char var_26 = (unsigned char)251;
long long int var_27 = -5973298380642727161LL;
_Bool var_28 = (_Bool)1;
short var_29 = (short)13167;
unsigned int var_30 = 4096120007U;
unsigned long long int var_31 = 14909239401851918864ULL;
unsigned short arr_1 [21] ;
long long int arr_2 [21] [21] ;
unsigned long long int arr_3 [21] ;
unsigned short arr_4 [21] [21] [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
unsigned char arr_6 [21] [21] [21] ;
unsigned short arr_8 [21] ;
unsigned short arr_10 [21] ;
short arr_12 [21] [21] ;
short arr_13 [21] [21] [21] [21] [21] [21] [21] ;
long long int arr_15 [21] [21] [21] [21] ;
unsigned int arr_16 [21] [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)33231;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 6278164220489499689LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 16683628268991926776ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)4936;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4271412074874720789ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)166 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)25999;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)27586;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (short)13757;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-15050;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5434216352900694888LL : -6260552183381286176LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 585876319U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
