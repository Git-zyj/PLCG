#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)44;
unsigned long long int var_5 = 6754907768472414620ULL;
unsigned char var_7 = (unsigned char)117;
short var_9 = (short)-10488;
_Bool var_10 = (_Bool)0;
int var_13 = -25376604;
long long int var_14 = -7186295686627726853LL;
int zero = 0;
long long int var_17 = -412310188154967467LL;
unsigned short var_18 = (unsigned short)56731;
int var_19 = -723078137;
signed char var_20 = (signed char)-26;
short var_21 = (short)-3467;
unsigned short var_22 = (unsigned short)44516;
unsigned short arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
signed char arr_3 [24] [24] [24] ;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)5239;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 7003961855975182093ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1999075890834796880LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
