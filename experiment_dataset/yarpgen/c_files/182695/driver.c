#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3545098768247531089LL;
short var_4 = (short)15686;
signed char var_7 = (signed char)-42;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)13;
signed char var_11 = (signed char)-101;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)229;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-48;
signed char var_17 = (signed char)-8;
unsigned long long int var_18 = 9412965807407612630ULL;
signed char var_19 = (signed char)47;
signed char var_20 = (signed char)-6;
unsigned char arr_0 [25] ;
int arr_1 [25] ;
unsigned long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 378292093;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6839399763226903847ULL : 700286869265801984ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
