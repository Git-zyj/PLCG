#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 425628957;
int var_1 = -602099129;
int var_2 = 1333580985;
short var_3 = (short)7771;
unsigned long long int var_4 = 10310106017532534056ULL;
unsigned short var_5 = (unsigned short)8441;
signed char var_6 = (signed char)-72;
unsigned long long int var_9 = 12620126594585379962ULL;
int var_10 = -1140291654;
unsigned long long int var_11 = 7547775745718688766ULL;
unsigned long long int var_12 = 4827883342624347568ULL;
int var_13 = 1663126985;
long long int var_14 = 6937413218326215695LL;
unsigned short var_15 = (unsigned short)26362;
int var_16 = -1354228862;
int zero = 0;
unsigned char var_17 = (unsigned char)247;
unsigned short var_18 = (unsigned short)21000;
unsigned short var_19 = (unsigned short)64265;
short var_20 = (short)11969;
short var_21 = (short)7924;
unsigned int var_22 = 3196218878U;
long long int var_23 = -3483376850377762221LL;
unsigned short var_24 = (unsigned short)14918;
unsigned long long int var_25 = 15022098003452994759ULL;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 5687436274236608352ULL;
short var_28 = (short)-9722;
short arr_2 [20] ;
short arr_10 [17] ;
unsigned long long int arr_19 [17] [17] ;
unsigned long long int arr_20 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)16439;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (short)-31796;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 17740369672455048751ULL : 14774163424477629550ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = 10104328064743650742ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
