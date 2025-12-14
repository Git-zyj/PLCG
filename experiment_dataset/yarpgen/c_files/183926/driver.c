#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 512437319;
short var_2 = (short)-16055;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)40780;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)133;
signed char var_8 = (signed char)112;
int zero = 0;
unsigned short var_10 = (unsigned short)937;
unsigned char var_11 = (unsigned char)99;
unsigned short var_12 = (unsigned short)5195;
signed char var_13 = (signed char)-80;
unsigned short var_14 = (unsigned short)58119;
unsigned long long int arr_2 [10] [10] ;
unsigned char arr_4 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 14217867210362319959ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)131 : (unsigned char)153;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
