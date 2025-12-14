#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 1991280691177574074ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)29320;
short var_7 = (short)16527;
unsigned long long int var_10 = 12383661602900726058ULL;
unsigned char var_12 = (unsigned char)149;
int var_13 = -1313071627;
unsigned short var_14 = (unsigned short)59891;
unsigned int var_17 = 671664094U;
int zero = 0;
unsigned char var_18 = (unsigned char)225;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)88;
int var_21 = -1887432476;
short var_22 = (short)-14438;
_Bool var_23 = (_Bool)1;
unsigned int arr_3 [22] [22] [22] ;
int arr_5 [22] [22] [22] ;
unsigned int arr_6 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2202682504U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -707856698 : 1793081517;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 457941630U : 2766234342U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
