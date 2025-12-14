#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3529896032U;
unsigned int var_1 = 2827316887U;
unsigned int var_4 = 216890702U;
unsigned int var_5 = 2642682003U;
short var_6 = (short)-11520;
unsigned long long int var_7 = 8779894348166292814ULL;
unsigned short var_8 = (unsigned short)53194;
int var_11 = 975482512;
unsigned short var_12 = (unsigned short)43746;
int zero = 0;
int var_13 = -1126085273;
unsigned long long int var_14 = 12291649887632413292ULL;
unsigned char var_15 = (unsigned char)210;
long long int var_16 = -570044546220457942LL;
unsigned char arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)7 : (unsigned char)32;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
