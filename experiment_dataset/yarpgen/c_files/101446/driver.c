#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 893009010;
unsigned short var_6 = (unsigned short)60216;
unsigned long long int var_7 = 972112720284916567ULL;
int zero = 0;
short var_15 = (short)-28625;
unsigned char var_16 = (unsigned char)176;
long long int var_17 = 1669914404878146863LL;
unsigned int var_18 = 2997153085U;
unsigned long long int var_19 = 3870065020758649786ULL;
unsigned char var_20 = (unsigned char)174;
_Bool arr_0 [20] [20] ;
unsigned char arr_2 [20] ;
short arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-4093;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
