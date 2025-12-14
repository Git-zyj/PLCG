#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 597865242U;
int var_3 = -1709567326;
unsigned int var_10 = 4060092186U;
unsigned long long int var_11 = 6437815744289733136ULL;
unsigned char var_14 = (unsigned char)198;
_Bool var_16 = (_Bool)0;
int var_17 = -651785110;
long long int var_19 = -3484517835168209193LL;
int zero = 0;
unsigned short var_20 = (unsigned short)31084;
unsigned long long int var_21 = 11369581365436883730ULL;
unsigned int var_22 = 95482058U;
unsigned int var_23 = 2570795316U;
unsigned int var_24 = 2437954418U;
unsigned int var_25 = 694800050U;
_Bool arr_1 [12] ;
unsigned short arr_3 [12] ;
_Bool arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)45651;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
