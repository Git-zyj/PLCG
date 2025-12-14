#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-33;
short var_2 = (short)-27761;
unsigned char var_3 = (unsigned char)72;
short var_4 = (short)-15144;
signed char var_5 = (signed char)-38;
unsigned short var_13 = (unsigned short)5967;
unsigned long long int var_14 = 1982701668064426935ULL;
unsigned long long int var_15 = 4821491765617796321ULL;
int var_16 = 158010158;
int zero = 0;
signed char var_17 = (signed char)80;
unsigned char var_18 = (unsigned char)101;
signed char var_19 = (signed char)48;
int var_20 = -870708644;
_Bool var_21 = (_Bool)0;
signed char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-20;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
