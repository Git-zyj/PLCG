#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)182;
unsigned char var_5 = (unsigned char)254;
long long int var_7 = 5591373440234919577LL;
unsigned short var_8 = (unsigned short)35260;
int var_14 = 638234255;
long long int var_18 = -1246654486907834222LL;
int zero = 0;
unsigned short var_19 = (unsigned short)30255;
short var_20 = (short)-2;
unsigned long long int var_21 = 7485741933021408592ULL;
unsigned short var_22 = (unsigned short)58843;
unsigned char arr_0 [18] ;
unsigned char arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 741526619U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
