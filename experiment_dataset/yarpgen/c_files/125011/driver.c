#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4096595710351841759LL;
unsigned long long int var_6 = 7610774854344712610ULL;
int var_9 = -172547522;
unsigned short var_10 = (unsigned short)3925;
int var_12 = 134244540;
unsigned short var_14 = (unsigned short)1171;
int zero = 0;
unsigned char var_18 = (unsigned char)125;
long long int var_19 = -1201334298199534614LL;
unsigned short var_20 = (unsigned short)38049;
signed char var_21 = (signed char)120;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 15460892842989547777ULL;
unsigned long long int var_24 = 5707301228824778296ULL;
_Bool var_25 = (_Bool)0;
unsigned char arr_0 [11] [11] ;
short arr_3 [20] ;
short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)19941;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-20175;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
