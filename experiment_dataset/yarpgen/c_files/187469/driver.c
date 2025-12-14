#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
signed char var_4 = (signed char)118;
signed char var_6 = (signed char)31;
unsigned char var_8 = (unsigned char)193;
int var_10 = -1983775740;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_19 = (short)12693;
int var_20 = -1054801764;
unsigned int var_21 = 1394642495U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)78;
unsigned char arr_2 [24] [24] [24] ;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)66;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
