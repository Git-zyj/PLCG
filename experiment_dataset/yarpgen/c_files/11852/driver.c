#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6800;
short var_1 = (short)-7109;
unsigned short var_2 = (unsigned short)19982;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 1369987034482601844ULL;
short var_6 = (short)19918;
unsigned long long int var_7 = 3037330470225809522ULL;
short var_8 = (short)31324;
unsigned long long int var_9 = 11471214864913421433ULL;
int var_10 = 16099807;
signed char var_11 = (signed char)-31;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 12409976077966809227ULL;
signed char var_16 = (signed char)-75;
int var_18 = 2084944923;
unsigned int var_19 = 3990537566U;
int zero = 0;
int var_20 = 1451528965;
unsigned long long int var_21 = 17982597948039539925ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 5083537807805094341ULL;
int var_24 = -437052086;
short var_25 = (short)-4199;
unsigned int var_26 = 671491306U;
unsigned long long int var_27 = 4979086078258798250ULL;
int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = -78633856;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
