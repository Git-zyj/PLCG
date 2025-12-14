#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 12557001642649528309ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 1888533461327490311ULL;
unsigned long long int var_8 = 7144942060989811472ULL;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-68;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 4166957952U;
long long int var_16 = -6926992561504476662LL;
unsigned long long int var_17 = 619148581929060836ULL;
unsigned long long int arr_2 [22] ;
signed char arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 14365308109687085015ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-90 : (signed char)-55;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
