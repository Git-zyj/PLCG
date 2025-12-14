#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
short var_3 = (short)10083;
unsigned char var_4 = (unsigned char)170;
long long int var_5 = -6642279444898725036LL;
signed char var_7 = (signed char)-19;
unsigned char var_10 = (unsigned char)248;
unsigned short var_11 = (unsigned short)13916;
int zero = 0;
unsigned long long int var_12 = 13402244822025885659ULL;
int var_13 = 1084094216;
unsigned long long int var_14 = 5711475446433951013ULL;
unsigned long long int var_15 = 9002052275153038982ULL;
unsigned int var_16 = 1260437585U;
unsigned long long int var_17 = 16963688666710055831ULL;
signed char var_18 = (signed char)-113;
int var_19 = -138969897;
unsigned short arr_0 [23] [23] ;
int arr_1 [23] ;
unsigned int arr_2 [23] ;
signed char arr_5 [23] [23] [23] [23] ;
signed char arr_9 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)19939;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 314252334;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3907875339U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-124 : (signed char)-82;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
