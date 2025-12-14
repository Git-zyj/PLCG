#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12464;
short var_2 = (short)26187;
unsigned char var_3 = (unsigned char)55;
signed char var_4 = (signed char)-107;
unsigned char var_5 = (unsigned char)98;
unsigned int var_6 = 802688371U;
unsigned char var_7 = (unsigned char)100;
unsigned long long int var_8 = 9419173528531106230ULL;
unsigned int var_10 = 261560577U;
unsigned int var_11 = 399127559U;
int zero = 0;
short var_13 = (short)-19044;
unsigned int var_14 = 2256820104U;
int var_15 = -200814771;
int var_16 = 421550809;
unsigned short var_17 = (unsigned short)50761;
int var_18 = 276929718;
unsigned short arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned long long int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22555 : (unsigned short)31026;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 4810535654343427349ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
