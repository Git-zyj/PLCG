#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
unsigned short var_3 = (unsigned short)34854;
unsigned char var_4 = (unsigned char)207;
unsigned long long int var_7 = 12243093026299633335ULL;
_Bool var_8 = (_Bool)0;
long long int var_13 = -718821894256516204LL;
int zero = 0;
unsigned long long int var_15 = 16720642129311253547ULL;
unsigned short var_16 = (unsigned short)28784;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)65475;
unsigned int var_19 = 1319872386U;
unsigned short var_20 = (unsigned short)30314;
unsigned long long int var_21 = 430148629510086797ULL;
unsigned long long int arr_0 [10] [10] ;
int arr_2 [10] ;
short arr_3 [10] ;
unsigned char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3812609796764131399ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1155815594;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-30765;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)156;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
