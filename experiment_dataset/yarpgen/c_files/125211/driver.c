#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45625;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)6145;
long long int var_14 = -5453770318594766146LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1250897706U;
unsigned short var_18 = (unsigned short)65410;
int var_19 = -1755533693;
unsigned short var_20 = (unsigned short)30379;
long long int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
signed char arr_2 [17] [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2063657497715328407LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 16642360092256858774ULL : 8808450931150505105ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)(-127 - 1) : (signed char)15;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)68;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
