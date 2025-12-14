#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 244401688U;
signed char var_2 = (signed char)28;
unsigned long long int var_3 = 9716160374474577117ULL;
int var_4 = -619470541;
unsigned char var_5 = (unsigned char)22;
int var_6 = 1502576038;
unsigned char var_7 = (unsigned char)36;
int var_8 = -1398784280;
unsigned long long int var_10 = 16011560420055155855ULL;
unsigned long long int var_12 = 6001794938298149495ULL;
signed char var_15 = (signed char)97;
int var_16 = -2000227569;
unsigned char var_19 = (unsigned char)179;
int zero = 0;
short var_20 = (short)-28868;
int var_21 = -1243450379;
int var_22 = 1181669490;
int var_23 = -1991741823;
unsigned int var_24 = 2935380295U;
short var_25 = (short)1943;
short var_26 = (short)31686;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_13 [20] [20] [20] ;
unsigned int arr_16 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 6240651403908818420ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 9118377263134192014ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 2410155730U : 1515031526U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5911368422140584645ULL : 5114000133707544414ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
