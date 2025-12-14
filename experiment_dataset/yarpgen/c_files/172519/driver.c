#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-121;
unsigned long long int var_5 = 17250669083676376074ULL;
long long int var_12 = -6896881867832267198LL;
short var_14 = (short)1069;
unsigned char var_16 = (unsigned char)174;
int zero = 0;
signed char var_20 = (signed char)-115;
signed char var_21 = (signed char)63;
long long int var_22 = 6302347285455213104LL;
unsigned char var_23 = (unsigned char)55;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-22;
unsigned int var_26 = 51811394U;
_Bool arr_0 [25] ;
short arr_1 [25] [25] ;
unsigned long long int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)25866 : (short)15232;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 5556372651491322191ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
