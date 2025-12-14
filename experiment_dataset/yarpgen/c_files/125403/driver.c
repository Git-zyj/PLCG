#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2259411887U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 10307424294366165958ULL;
unsigned short var_5 = (unsigned short)51885;
unsigned int var_8 = 3711811253U;
long long int var_11 = 7547848192097127329LL;
unsigned long long int var_12 = 589975047557632274ULL;
unsigned short var_14 = (unsigned short)50779;
short var_15 = (short)-29970;
int zero = 0;
unsigned int var_17 = 1837148282U;
long long int var_18 = -3242252109592394895LL;
long long int var_19 = -2130534571235340210LL;
unsigned int var_20 = 1417644805U;
long long int var_21 = -8646202972544328631LL;
unsigned int var_22 = 3662995599U;
unsigned long long int arr_0 [11] ;
signed char arr_1 [11] ;
int arr_3 [11] ;
unsigned short arr_4 [11] ;
unsigned short arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3760869945771969463ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2129886980;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)64005;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned short)6868;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
