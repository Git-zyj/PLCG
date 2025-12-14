#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -699662377;
int var_6 = -1502676090;
unsigned long long int var_7 = 9265512146577802580ULL;
int var_8 = 1027219897;
short var_11 = (short)8115;
signed char var_15 = (signed char)64;
int zero = 0;
short var_17 = (short)-20130;
int var_18 = 1620997139;
int var_19 = -1221456954;
signed char arr_1 [23] ;
unsigned short arr_2 [23] [23] [23] ;
long long int arr_3 [23] [23] ;
signed char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)48140;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 2144642928937163550LL : -3152765943121181096LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-126;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
