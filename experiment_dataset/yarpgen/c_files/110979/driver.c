#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
unsigned char var_3 = (unsigned char)19;
unsigned short var_4 = (unsigned short)57054;
unsigned short var_5 = (unsigned short)47539;
unsigned char var_8 = (unsigned char)226;
int zero = 0;
unsigned short var_15 = (unsigned short)10704;
unsigned short var_16 = (unsigned short)14126;
unsigned short var_17 = (unsigned short)25524;
short var_18 = (short)-5320;
_Bool arr_0 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
