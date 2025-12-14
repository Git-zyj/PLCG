#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16591;
int var_7 = -1947726342;
unsigned long long int var_8 = 3116291891170540870ULL;
long long int var_9 = 4007327481871245787LL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)14132;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-103;
unsigned int var_16 = 1479655379U;
int zero = 0;
long long int var_17 = 685963879386030636LL;
unsigned long long int var_18 = 9700523588073560503ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2561307428U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 279731089U;
int arr_0 [10] ;
_Bool arr_1 [10] ;
long long int arr_2 [10] ;
long long int arr_3 [10] ;
_Bool arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -402461731 : -1306563214;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 7062324626835941439LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4989340610732811098LL : -2338136780834508215LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
