#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 34489921U;
signed char var_2 = (signed char)-13;
unsigned long long int var_3 = 17592956398456990735ULL;
short var_4 = (short)7526;
unsigned int var_5 = 2788486176U;
unsigned char var_7 = (unsigned char)109;
unsigned short var_8 = (unsigned short)15979;
long long int var_9 = -6835335526619983641LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)63;
_Bool var_13 = (_Bool)1;
short var_16 = (short)15676;
int zero = 0;
unsigned int var_17 = 3619710046U;
long long int var_18 = 6742012166894340209LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)17933;
int var_22 = 1871784636;
unsigned int arr_0 [17] [17] ;
unsigned long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 288920449U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 11308798289749461704ULL : 4207338972918773133ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
