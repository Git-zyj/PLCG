#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -942033424;
unsigned char var_2 = (unsigned char)145;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-29730;
unsigned char var_10 = (unsigned char)141;
int var_11 = -1614710464;
unsigned long long int var_13 = 13149737899196948895ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_17 = 1677468510U;
int zero = 0;
int var_19 = 879761746;
int var_20 = 141765855;
long long int var_21 = -2767668959762676692LL;
long long int var_22 = -4179067221011741196LL;
unsigned char var_23 = (unsigned char)162;
int var_24 = 1509614231;
int var_25 = -1161925185;
int var_26 = 1319458731;
unsigned int var_27 = 237649989U;
unsigned int arr_9 [14] [14] ;
unsigned long long int arr_15 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 2163876299U : 1160904186U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 13644875655330755381ULL : 18000802295874407388ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
