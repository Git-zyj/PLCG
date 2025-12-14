#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29923;
_Bool var_3 = (_Bool)0;
short var_4 = (short)16748;
unsigned long long int var_6 = 4469615095111961715ULL;
unsigned char var_7 = (unsigned char)65;
short var_9 = (short)31313;
int zero = 0;
long long int var_10 = -4034587591436591510LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 1851941694900197742LL;
unsigned char var_15 = (unsigned char)164;
unsigned short var_16 = (unsigned short)19729;
short var_17 = (short)17731;
int var_18 = -1816740143;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)30290;
unsigned long long int var_21 = 9770295771677491242ULL;
unsigned char arr_3 [19] ;
short arr_7 [21] [21] ;
short arr_8 [21] ;
unsigned int arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (short)11932;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)-9792;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 3994972419U : 4099285602U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
