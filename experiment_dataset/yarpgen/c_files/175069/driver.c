#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-76;
signed char var_6 = (signed char)67;
unsigned long long int var_9 = 12497081147362305529ULL;
short var_11 = (short)-28379;
unsigned int var_13 = 2011073335U;
int zero = 0;
long long int var_14 = -8854983605750058241LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4630288644241868831ULL;
short var_17 = (short)674;
unsigned short var_18 = (unsigned short)49579;
int var_19 = 1477528240;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)222;
unsigned short var_22 = (unsigned short)43148;
unsigned int var_23 = 1105121610U;
unsigned char arr_0 [11] ;
_Bool arr_1 [11] [11] ;
long long int arr_2 [11] ;
long long int arr_3 [11] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 6473685131083472563LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -3612246276626217654LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 5418067627605982574ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
