#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 656908564;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2371804985U;
unsigned short var_5 = (unsigned short)30871;
unsigned int var_7 = 1901421950U;
int var_8 = -1095352953;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-40;
unsigned long long int var_12 = 5295528557561836350ULL;
int zero = 0;
long long int var_13 = 8403918890177018254LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)24828;
unsigned short var_16 = (unsigned short)27708;
_Bool var_17 = (_Bool)0;
signed char arr_3 [17] [17] ;
unsigned long long int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 4559415189022426963ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
