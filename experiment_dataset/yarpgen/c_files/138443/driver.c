#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
unsigned char var_2 = (unsigned char)102;
unsigned long long int var_4 = 5504876830314671608ULL;
unsigned short var_6 = (unsigned short)22650;
unsigned char var_7 = (unsigned char)151;
unsigned short var_8 = (unsigned short)64274;
int zero = 0;
long long int var_10 = -5332311983516423806LL;
signed char var_11 = (signed char)115;
unsigned char var_12 = (unsigned char)97;
long long int var_13 = 4542090935978625450LL;
signed char var_14 = (signed char)-86;
unsigned char arr_3 [15] [15] [15] ;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)29;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
