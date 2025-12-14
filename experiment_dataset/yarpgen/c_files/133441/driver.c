#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-59;
unsigned short var_6 = (unsigned short)58070;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)36;
unsigned char var_15 = (unsigned char)74;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 2631871001724342271LL;
short var_18 = (short)9583;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-9095;
short var_21 = (short)-2506;
int var_22 = -1920370212;
_Bool var_23 = (_Bool)0;
signed char arr_0 [15] ;
short arr_2 [15] ;
int arr_3 [15] ;
unsigned short arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-1512;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -334444693;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)53408;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
