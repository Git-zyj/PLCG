#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1595411732U;
unsigned int var_2 = 177015699U;
unsigned short var_3 = (unsigned short)11569;
long long int var_5 = -4860854916261164434LL;
unsigned short var_6 = (unsigned short)4007;
unsigned short var_8 = (unsigned short)56058;
unsigned short var_9 = (unsigned short)35934;
long long int var_10 = -8004830366485746219LL;
unsigned int var_12 = 653018175U;
unsigned int var_14 = 1129174832U;
unsigned int var_15 = 1400505739U;
unsigned char var_16 = (unsigned char)205;
int zero = 0;
int var_17 = -24225636;
unsigned char var_18 = (unsigned char)228;
long long int var_19 = -1692955863855583229LL;
short var_20 = (short)6595;
unsigned short var_21 = (unsigned short)42587;
unsigned short var_22 = (unsigned short)14314;
long long int var_23 = 5563803445340904022LL;
unsigned int var_24 = 110221163U;
unsigned int var_25 = 2637316486U;
unsigned short arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
long long int arr_4 [14] ;
long long int arr_5 [14] [14] ;
long long int arr_6 [14] [14] [14] ;
unsigned short arr_9 [14] [14] ;
unsigned char arr_10 [14] [14] [14] [14] [14] [14] ;
unsigned short arr_12 [14] ;
int arr_13 [14] [14] ;
long long int arr_20 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)4305;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42114;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -1471066119290612474LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -1424487949951991888LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2396683442348376988LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)43904;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned short)13475;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 2068637760;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = 2561787709527906153LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
