#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29806;
unsigned int var_3 = 3660505055U;
unsigned long long int var_11 = 16162061130850191381ULL;
unsigned long long int var_18 = 16968632858913012633ULL;
unsigned char var_19 = (unsigned char)132;
int zero = 0;
unsigned int var_20 = 1652845992U;
int var_21 = 1079320792;
unsigned int var_22 = 3160179456U;
long long int var_23 = -7700335639791672035LL;
signed char var_24 = (signed char)-52;
signed char var_25 = (signed char)-40;
int arr_0 [14] [14] ;
_Bool arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 192633049;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
