#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13227;
long long int var_1 = 763657924246982452LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-30950;
unsigned int var_7 = 1284687247U;
unsigned int var_8 = 3857819318U;
int var_9 = -60849234;
unsigned long long int var_10 = 4971231603127615481ULL;
long long int var_12 = -3569638556220019823LL;
unsigned long long int var_13 = 10613479081174661098ULL;
long long int var_14 = 2836525048694661650LL;
int zero = 0;
unsigned long long int var_15 = 5404365625168395663ULL;
short var_16 = (short)542;
signed char var_17 = (signed char)-96;
unsigned int var_18 = 3084486886U;
unsigned long long int var_19 = 12890188985499580018ULL;
long long int var_20 = -3521371607885369854LL;
unsigned int var_21 = 2970266637U;
_Bool var_22 = (_Bool)1;
unsigned int arr_2 [23] ;
short arr_3 [23] ;
int arr_5 [21] [21] ;
unsigned int arr_10 [24] [24] ;
unsigned short arr_11 [24] ;
_Bool arr_4 [23] ;
short arr_13 [24] ;
unsigned short arr_14 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1232453248U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-22182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 269541021;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 2460898649U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned short)7553;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (short)8156;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)41186;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
