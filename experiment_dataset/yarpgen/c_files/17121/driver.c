#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54253;
unsigned int var_1 = 843480358U;
unsigned short var_3 = (unsigned short)54416;
unsigned short var_4 = (unsigned short)61912;
unsigned long long int var_5 = 4348587143529982751ULL;
long long int var_8 = -1535437047841071631LL;
long long int var_10 = 6723121386950629892LL;
int zero = 0;
int var_11 = -997074391;
unsigned int var_12 = 1594834471U;
unsigned short var_13 = (unsigned short)5888;
unsigned long long int var_14 = 15843097056313783370ULL;
unsigned long long int var_15 = 751030345823671687ULL;
unsigned char var_16 = (unsigned char)186;
unsigned int var_17 = 611022153U;
short arr_0 [25] ;
unsigned short arr_1 [25] ;
long long int arr_2 [25] ;
unsigned long long int arr_3 [22] ;
_Bool arr_4 [22] ;
unsigned int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)609;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)2507;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 8676138646808687031LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1831976388377328901ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 325900320U : 1247765513U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
