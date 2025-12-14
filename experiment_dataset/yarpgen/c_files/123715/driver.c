#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14795;
long long int var_2 = -167159465788535295LL;
short var_3 = (short)-28637;
int var_4 = 1948758666;
int var_5 = -801888017;
unsigned int var_6 = 4222093027U;
int var_7 = 1775758691;
int var_11 = -1224373947;
unsigned long long int var_12 = 7900457203026792313ULL;
short var_13 = (short)3590;
long long int var_16 = -4224427366916540600LL;
short var_17 = (short)28837;
unsigned int var_18 = 2353823738U;
int zero = 0;
unsigned int var_19 = 1190510347U;
long long int var_20 = -4369125556074677836LL;
unsigned long long int var_21 = 725278964033627999ULL;
unsigned long long int var_22 = 612091338478849948ULL;
int var_23 = -1501567302;
long long int var_24 = 6696753322950275457LL;
unsigned long long int var_25 = 16775218824869531378ULL;
unsigned int var_26 = 179974084U;
short var_27 = (short)18609;
int arr_0 [12] ;
long long int arr_1 [12] ;
long long int arr_4 [23] [23] ;
long long int arr_5 [14] ;
short arr_6 [14] [14] ;
short arr_2 [12] ;
short arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2009343113 : -1792263840;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7427562914842062986LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 4684981662908306983LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -492168986415286616LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-27736;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)6121 : (short)-13699;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (short)13024;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
