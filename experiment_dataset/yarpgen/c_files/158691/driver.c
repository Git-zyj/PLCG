#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7773570869813548964LL;
signed char var_1 = (signed char)0;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)187;
unsigned int var_4 = 4079017302U;
unsigned long long int var_5 = 8284704137372239766ULL;
unsigned char var_6 = (unsigned char)115;
unsigned short var_8 = (unsigned short)2210;
unsigned long long int var_9 = 1250646435084321493ULL;
unsigned int var_10 = 3411229207U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)20002;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3151014045107377007ULL;
unsigned long long int var_15 = 15786315037846273085ULL;
unsigned char var_16 = (unsigned char)220;
short var_17 = (short)-13413;
unsigned long long int var_18 = 17049879058973899622ULL;
_Bool arr_0 [17] ;
_Bool arr_1 [17] [17] ;
unsigned long long int arr_2 [17] ;
signed char arr_3 [17] ;
long long int arr_4 [17] [17] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3957755960301893155ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1132012333897465678LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 55904998U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
