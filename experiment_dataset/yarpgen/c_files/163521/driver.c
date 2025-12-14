#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3055513434U;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 16433047401756333917ULL;
unsigned int var_3 = 1409642717U;
signed char var_6 = (signed char)102;
signed char var_8 = (signed char)104;
long long int var_9 = -6475500376458892171LL;
unsigned int var_13 = 1544121374U;
int zero = 0;
short var_14 = (short)-919;
unsigned char var_15 = (unsigned char)143;
_Bool var_16 = (_Bool)0;
short var_17 = (short)25827;
long long int var_18 = -6393127298289334760LL;
unsigned short var_19 = (unsigned short)6180;
unsigned char var_20 = (unsigned char)39;
unsigned char arr_8 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)226;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
