#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)679;
unsigned char var_5 = (unsigned char)229;
unsigned short var_8 = (unsigned short)42564;
unsigned short var_9 = (unsigned short)62513;
int var_10 = 2085501879;
int zero = 0;
unsigned short var_12 = (unsigned short)27372;
signed char var_13 = (signed char)-23;
unsigned char var_14 = (unsigned char)21;
signed char var_15 = (signed char)-116;
short var_16 = (short)-11996;
_Bool arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
