#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22534;
unsigned long long int var_3 = 17556125569528598526ULL;
unsigned char var_9 = (unsigned char)195;
unsigned long long int var_13 = 14880133667054632340ULL;
short var_14 = (short)2580;
int zero = 0;
signed char var_17 = (signed char)67;
unsigned short var_18 = (unsigned short)10316;
unsigned short var_19 = (unsigned short)9835;
short var_20 = (short)15973;
long long int var_21 = -8756925307138252034LL;
unsigned char arr_1 [19] ;
int arr_2 [19] ;
unsigned int arr_5 [11] ;
signed char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 396482767;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 3726502423U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-8;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
