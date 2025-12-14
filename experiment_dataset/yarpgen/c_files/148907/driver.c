#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3858618608071262169LL;
signed char var_4 = (signed char)58;
short var_5 = (short)-16832;
int var_7 = 1238813349;
short var_16 = (short)-17607;
int zero = 0;
unsigned int var_18 = 1753850064U;
unsigned int var_19 = 3966598396U;
int var_20 = -666021364;
unsigned int var_21 = 55629041U;
unsigned char var_22 = (unsigned char)95;
long long int arr_5 [15] ;
_Bool arr_6 [15] [15] ;
long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -8956859327149334670LL : -3468476895169252536LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1063919368443566439LL : -3110593613977446118LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
