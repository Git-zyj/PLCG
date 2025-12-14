#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5502844423762304648ULL;
long long int var_3 = -2906736399558991523LL;
short var_7 = (short)14716;
unsigned long long int var_9 = 7221794731837867474ULL;
short var_10 = (short)-2488;
int zero = 0;
short var_11 = (short)30240;
short var_12 = (short)5989;
int var_13 = -109591916;
unsigned long long int var_14 = 4696411436273037246ULL;
unsigned short var_15 = (unsigned short)58208;
short var_16 = (short)-6536;
signed char arr_3 [10] [10] [10] ;
_Bool arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
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
