#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40858;
unsigned char var_3 = (unsigned char)83;
_Bool var_4 = (_Bool)1;
long long int var_6 = -6147122421970820297LL;
long long int var_7 = 4118337045364493896LL;
unsigned char var_9 = (unsigned char)240;
long long int var_12 = -8959285364223610359LL;
signed char var_13 = (signed char)-36;
signed char var_15 = (signed char)118;
long long int var_16 = -3577479200395740962LL;
int zero = 0;
signed char var_19 = (signed char)16;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)177;
unsigned char var_22 = (unsigned char)154;
signed char var_23 = (signed char)-40;
_Bool var_24 = (_Bool)0;
long long int var_25 = 1629159417676935968LL;
signed char arr_1 [12] ;
short arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-30254;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
