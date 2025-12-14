#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1353971571;
short var_3 = (short)28421;
int var_5 = 143577175;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-10;
int var_12 = 1839843859;
int zero = 0;
signed char var_13 = (signed char)-91;
short var_14 = (short)23780;
long long int var_15 = 5821903586293298396LL;
signed char var_16 = (signed char)73;
short var_17 = (short)6343;
short var_18 = (short)-28368;
short var_19 = (short)-18070;
long long int arr_0 [12] [12] ;
long long int arr_4 [12] ;
signed char arr_8 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -7032472290788396005LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1365486015566989716LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)8;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
