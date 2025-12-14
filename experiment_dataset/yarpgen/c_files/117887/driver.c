#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 914101264U;
long long int var_1 = -3840611346253756378LL;
unsigned short var_2 = (unsigned short)50503;
short var_3 = (short)-24782;
unsigned short var_5 = (unsigned short)31200;
unsigned long long int var_6 = 2253651566862065618ULL;
unsigned short var_8 = (unsigned short)1143;
unsigned long long int var_9 = 2220200661712046787ULL;
short var_10 = (short)-11267;
unsigned short var_12 = (unsigned short)27293;
long long int var_13 = -527080443941141324LL;
unsigned long long int var_14 = 62934727129414192ULL;
long long int var_15 = -2950392774179279005LL;
short var_16 = (short)-31888;
int zero = 0;
unsigned int var_17 = 1160627776U;
unsigned short var_18 = (unsigned short)40163;
_Bool var_19 = (_Bool)0;
short var_20 = (short)17030;
short var_21 = (short)-19405;
long long int arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8839644103600970344LL : 100595411113197744LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
