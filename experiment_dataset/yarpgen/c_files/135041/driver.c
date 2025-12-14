#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned char var_5 = (unsigned char)82;
unsigned long long int var_6 = 12336893691493598782ULL;
long long int var_8 = 104536072269215668LL;
signed char var_9 = (signed char)14;
unsigned char var_13 = (unsigned char)138;
int zero = 0;
unsigned long long int var_19 = 354088900654747717ULL;
long long int var_20 = 5445017794038535488LL;
unsigned long long int var_21 = 6374994807263740737ULL;
unsigned long long int var_22 = 7826417632972096654ULL;
unsigned long long int var_23 = 8105240876964844456ULL;
unsigned long long int arr_1 [18] [18] ;
short arr_2 [18] ;
unsigned long long int arr_3 [18] [18] [18] ;
unsigned long long int arr_4 [18] [18] ;
short arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 4170755161857382629ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-31140;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2916104242324058963ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 18372667685800617083ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-18775;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
