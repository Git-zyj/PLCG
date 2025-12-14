#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)100;
unsigned char var_5 = (unsigned char)134;
signed char var_6 = (signed char)55;
unsigned char var_7 = (unsigned char)149;
int var_8 = -52053403;
signed char var_15 = (signed char)-3;
signed char var_16 = (signed char)91;
signed char var_18 = (signed char)-4;
int zero = 0;
unsigned long long int var_19 = 1577738676734000411ULL;
signed char var_20 = (signed char)-9;
unsigned short var_21 = (unsigned short)18407;
signed char var_22 = (signed char)27;
unsigned short var_23 = (unsigned short)30507;
unsigned char var_24 = (unsigned char)180;
_Bool arr_0 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
