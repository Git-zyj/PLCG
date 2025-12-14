#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1918277896466275532ULL;
unsigned short var_3 = (unsigned short)33382;
signed char var_5 = (signed char)-87;
unsigned long long int var_6 = 16000784941567144139ULL;
int var_8 = -1446800445;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)16274;
short var_12 = (short)1590;
short var_13 = (short)20553;
int zero = 0;
unsigned short var_15 = (unsigned short)42834;
unsigned short var_16 = (unsigned short)25499;
unsigned long long int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12533756202688828853ULL : 10006788979900682632ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
