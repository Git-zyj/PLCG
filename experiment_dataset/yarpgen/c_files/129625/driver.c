#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
short var_2 = (short)228;
unsigned short var_5 = (unsigned short)4792;
unsigned int var_6 = 1734770452U;
signed char var_8 = (signed char)-121;
unsigned long long int var_10 = 15660802173757107329ULL;
signed char var_12 = (signed char)(-127 - 1);
unsigned short var_13 = (unsigned short)32860;
signed char var_14 = (signed char)-51;
int zero = 0;
signed char var_16 = (signed char)-9;
signed char var_17 = (signed char)31;
int var_18 = -571257507;
signed char var_19 = (signed char)-48;
long long int var_20 = -5799446405285969405LL;
unsigned short var_21 = (unsigned short)24508;
signed char var_22 = (signed char)-23;
unsigned int var_23 = 903589733U;
unsigned int var_24 = 833151487U;
unsigned short arr_0 [13] ;
signed char arr_1 [13] [13] ;
int arr_2 [21] ;
long long int arr_3 [21] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)32279;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1346531658;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 9198477678951788738LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)58;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
