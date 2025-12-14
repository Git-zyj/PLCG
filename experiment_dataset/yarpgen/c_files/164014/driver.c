#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22334;
short var_6 = (short)-15352;
unsigned short var_7 = (unsigned short)2324;
unsigned long long int var_14 = 2207896748123206597ULL;
unsigned char var_15 = (unsigned char)131;
unsigned long long int var_16 = 6692786295142031099ULL;
int var_17 = -1681378687;
short var_18 = (short)-10124;
int zero = 0;
unsigned short var_20 = (unsigned short)3807;
int var_21 = -1550765174;
int var_22 = 1054771536;
signed char var_23 = (signed char)-123;
int var_24 = -1793007132;
unsigned char arr_1 [20] ;
unsigned long long int arr_2 [20] [20] [20] ;
unsigned short arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 13057002221847253955ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)24575;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
