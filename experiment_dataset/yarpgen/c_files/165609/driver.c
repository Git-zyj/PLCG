#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28151;
short var_8 = (short)19067;
unsigned int var_10 = 1828592621U;
unsigned short var_11 = (unsigned short)5953;
short var_13 = (short)13471;
long long int var_14 = -3449719297293803677LL;
unsigned char var_17 = (unsigned char)250;
int zero = 0;
unsigned char var_18 = (unsigned char)34;
short var_19 = (short)797;
unsigned int var_20 = 837645894U;
short var_21 = (short)-25088;
unsigned char arr_2 [17] [17] ;
short arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)7486;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
