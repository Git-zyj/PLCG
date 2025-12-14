#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2294997272U;
signed char var_2 = (signed char)-100;
unsigned char var_7 = (unsigned char)26;
_Bool var_8 = (_Bool)0;
int var_10 = 2066240631;
int zero = 0;
unsigned long long int var_19 = 3373613707844493526ULL;
unsigned long long int var_20 = 14799738883496229065ULL;
signed char var_21 = (signed char)-91;
unsigned long long int var_22 = 3437919478203823103ULL;
signed char var_23 = (signed char)10;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)6;
unsigned long long int var_26 = 9163486936850249353ULL;
short arr_0 [21] ;
int arr_2 [21] ;
int arr_3 [21] ;
unsigned short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-27239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1568334907;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 748132476;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)25527;
}

void checksum() {
    hash(&seed, var_19);
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
