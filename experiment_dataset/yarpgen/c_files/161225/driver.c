#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13795703683795710539ULL;
long long int var_2 = 2498083270317634730LL;
unsigned char var_5 = (unsigned char)3;
signed char var_6 = (signed char)-38;
signed char var_8 = (signed char)-102;
signed char var_11 = (signed char)123;
long long int var_17 = 7403488847929504031LL;
int zero = 0;
unsigned short var_18 = (unsigned short)4413;
unsigned char var_19 = (unsigned char)61;
unsigned short var_20 = (unsigned short)31207;
unsigned char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)237 : (unsigned char)182;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
