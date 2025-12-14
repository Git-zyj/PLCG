#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
int var_1 = 41633332;
signed char var_4 = (signed char)73;
signed char var_7 = (signed char)57;
unsigned short var_8 = (unsigned short)38246;
signed char var_11 = (signed char)56;
int zero = 0;
long long int var_14 = -805192101513941419LL;
unsigned short var_15 = (unsigned short)6226;
unsigned short var_16 = (unsigned short)44235;
unsigned int var_17 = 3493406740U;
unsigned short var_18 = (unsigned short)63857;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)35045;
unsigned int var_21 = 1143222193U;
signed char var_22 = (signed char)-16;
unsigned short var_23 = (unsigned short)34584;
int arr_1 [11] ;
unsigned int arr_2 [14] ;
unsigned int arr_3 [14] ;
unsigned short arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2052907245;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1261128146U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1376242450U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)51059;
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
