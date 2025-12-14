#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8333557560407051663LL;
signed char var_1 = (signed char)-40;
unsigned char var_3 = (unsigned char)39;
unsigned char var_4 = (unsigned char)197;
short var_5 = (short)2843;
unsigned short var_7 = (unsigned short)40809;
short var_8 = (short)28467;
unsigned int var_10 = 2122035659U;
unsigned int var_11 = 1765960094U;
unsigned short var_13 = (unsigned short)40390;
int zero = 0;
long long int var_14 = -6095538664800218723LL;
unsigned short var_15 = (unsigned short)39982;
long long int var_16 = 2471770832799902496LL;
unsigned short var_17 = (unsigned short)17444;
unsigned int arr_0 [12] ;
signed char arr_2 [12] ;
unsigned char arr_4 [12] [12] [12] ;
short arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2578069719U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)6978;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
