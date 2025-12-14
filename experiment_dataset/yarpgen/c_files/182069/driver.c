#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 1477393823U;
unsigned int var_5 = 2372712148U;
signed char var_6 = (signed char)-79;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)62;
signed char var_9 = (signed char)25;
unsigned long long int var_10 = 16196123001680188993ULL;
int zero = 0;
unsigned long long int var_11 = 9407800826274302901ULL;
long long int var_12 = 5149172897281831893LL;
unsigned int var_13 = 3600014519U;
unsigned int var_14 = 1107221072U;
short var_15 = (short)11488;
unsigned int var_16 = 1389433212U;
unsigned int arr_1 [25] ;
signed char arr_4 [14] ;
unsigned int arr_2 [25] ;
short arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3238700732U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3832873095U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)32219;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
