#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)53;
unsigned short var_9 = (unsigned short)36390;
unsigned short var_10 = (unsigned short)55499;
unsigned short var_12 = (unsigned short)24767;
unsigned char var_16 = (unsigned char)220;
unsigned char var_17 = (unsigned char)19;
unsigned short var_19 = (unsigned short)18358;
int zero = 0;
unsigned char var_20 = (unsigned char)207;
short var_21 = (short)-15141;
short var_22 = (short)31997;
short var_23 = (short)10576;
unsigned short arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)38462;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
