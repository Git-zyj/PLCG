#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9627;
unsigned char var_4 = (unsigned char)156;
unsigned short var_6 = (unsigned short)29296;
signed char var_7 = (signed char)-21;
unsigned short var_8 = (unsigned short)8859;
long long int var_10 = -6317124424691575110LL;
int zero = 0;
short var_11 = (short)-1470;
short var_12 = (short)-29875;
long long int var_13 = 3093658083824663423LL;
unsigned long long int var_14 = 4373734028304754732ULL;
unsigned char var_15 = (unsigned char)72;
unsigned short arr_10 [16] ;
unsigned char arr_11 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)62745;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)81;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
