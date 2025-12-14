#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
unsigned char var_2 = (unsigned char)243;
unsigned long long int var_4 = 17757504120446912941ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 3995896134U;
unsigned short var_9 = (unsigned short)37065;
unsigned short var_10 = (unsigned short)14130;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)117;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)26259;
unsigned int var_19 = 3529579868U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1578223017U;
unsigned short var_22 = (unsigned short)37606;
unsigned long long int var_23 = 15440681483160594839ULL;
unsigned char var_24 = (unsigned char)65;
_Bool arr_0 [19] ;
unsigned char arr_1 [19] ;
long long int arr_2 [19] ;
unsigned char arr_4 [19] ;
unsigned char arr_3 [19] ;
short arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)216 : (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4011184147444220934LL : 5289352049874920045LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)68 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)-22418;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
