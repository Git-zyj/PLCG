#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 273963278U;
unsigned char var_1 = (unsigned char)91;
int var_2 = -820537914;
unsigned long long int var_4 = 14282210167285834225ULL;
short var_5 = (short)-1749;
short var_6 = (short)14899;
long long int var_7 = -7593014792323608043LL;
unsigned long long int var_8 = 13231360274815338303ULL;
unsigned long long int var_9 = 14835333339245606527ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 14067077514577777994ULL;
unsigned long long int var_15 = 13152264948744751382ULL;
unsigned long long int var_16 = 15819006722503333395ULL;
unsigned long long int var_17 = 10245717371949003022ULL;
unsigned int var_18 = 2309236995U;
int var_19 = -1754770195;
int arr_0 [19] ;
signed char arr_3 [19] ;
_Bool arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 49130010;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
