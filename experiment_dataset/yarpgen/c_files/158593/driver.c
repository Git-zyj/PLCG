#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2851;
signed char var_2 = (signed char)88;
unsigned short var_6 = (unsigned short)15529;
short var_9 = (short)16982;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)94;
signed char var_16 = (signed char)-118;
signed char var_17 = (signed char)-64;
int zero = 0;
unsigned short var_18 = (unsigned short)3385;
int var_19 = -1784107400;
unsigned short var_20 = (unsigned short)9306;
signed char var_21 = (signed char)-59;
unsigned short var_22 = (unsigned short)44343;
signed char arr_0 [21] ;
signed char arr_7 [21] [21] [21] ;
_Bool arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
