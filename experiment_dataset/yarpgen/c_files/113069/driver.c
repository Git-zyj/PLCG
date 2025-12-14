#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-11736;
int var_8 = 1547689648;
signed char var_10 = (signed char)35;
long long int var_11 = -7255107645766067113LL;
unsigned short var_12 = (unsigned short)37582;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 1915076026U;
unsigned int var_16 = 130430367U;
long long int var_17 = -478411622981501254LL;
long long int var_18 = 3655433177726005470LL;
unsigned char var_19 = (unsigned char)165;
_Bool var_20 = (_Bool)0;
unsigned int arr_1 [23] ;
_Bool arr_2 [23] [23] ;
_Bool arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3856014911U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
