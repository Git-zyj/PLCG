#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
short var_5 = (short)-30601;
short var_6 = (short)-11023;
unsigned short var_10 = (unsigned short)21069;
signed char var_11 = (signed char)-83;
int zero = 0;
unsigned short var_12 = (unsigned short)64093;
unsigned long long int var_13 = 4026926892843244479ULL;
unsigned char var_14 = (unsigned char)139;
unsigned char var_15 = (unsigned char)129;
unsigned char arr_0 [19] ;
unsigned char arr_2 [19] ;
unsigned char arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)102;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
