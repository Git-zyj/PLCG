#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4670661587267709932ULL;
unsigned long long int var_1 = 7862341551728275618ULL;
short var_2 = (short)-17524;
signed char var_3 = (signed char)-66;
unsigned short var_5 = (unsigned short)31300;
unsigned char var_6 = (unsigned char)212;
unsigned char var_8 = (unsigned char)137;
int var_9 = 700208897;
unsigned long long int var_10 = 12037024794451127646ULL;
int zero = 0;
short var_11 = (short)18784;
unsigned int var_12 = 4088516632U;
unsigned long long int var_13 = 939464303098245123ULL;
unsigned int var_14 = 793129012U;
unsigned long long int var_15 = 2110948120788854917ULL;
unsigned int var_16 = 824110906U;
signed char var_17 = (signed char)84;
unsigned char arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
signed char arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)161 : (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)69 : (signed char)-87;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
