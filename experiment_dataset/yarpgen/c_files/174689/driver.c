#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9319;
int var_5 = -1011780410;
unsigned char var_6 = (unsigned char)82;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3138527879U;
unsigned long long int var_10 = 9937085994208858412ULL;
int var_11 = 1904035728;
int var_13 = -26891416;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1449648903;
unsigned int var_16 = 2382191795U;
unsigned int var_17 = 3056445619U;
int var_18 = 1276645547;
unsigned char var_19 = (unsigned char)114;
unsigned long long int var_20 = 16056173998865430371ULL;
unsigned long long int var_21 = 7770545186179974480ULL;
unsigned long long int var_22 = 9928419031123627288ULL;
unsigned short var_23 = (unsigned short)35219;
unsigned long long int var_24 = 1358586374912924727ULL;
unsigned int arr_0 [12] [12] ;
int arr_1 [12] ;
_Bool arr_2 [12] ;
int arr_3 [14] ;
short arr_6 [17] ;
unsigned char arr_8 [17] ;
_Bool arr_9 [24] [24] ;
unsigned long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 534108822U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1554918728;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -733281824;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)23521;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 11815571501809012890ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
