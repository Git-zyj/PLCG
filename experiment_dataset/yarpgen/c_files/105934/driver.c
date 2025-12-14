#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8634;
short var_10 = (short)11729;
unsigned int var_18 = 4097746092U;
int zero = 0;
unsigned int var_19 = 4241437504U;
signed char var_20 = (signed char)-105;
unsigned char var_21 = (unsigned char)61;
short var_22 = (short)-21500;
signed char var_23 = (signed char)-81;
signed char var_24 = (signed char)-76;
unsigned long long int var_25 = 15504381224245780580ULL;
unsigned short arr_1 [10] ;
unsigned long long int arr_4 [10] [10] [10] ;
unsigned char arr_5 [10] ;
unsigned short arr_8 [10] [10] [10] [10] ;
short arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)22308;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 12814261974082717258ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)60208 : (unsigned short)55996;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)6554 : (short)20440;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
