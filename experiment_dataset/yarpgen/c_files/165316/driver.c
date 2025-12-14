#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 11145124869636511473ULL;
signed char var_5 = (signed char)-51;
signed char var_8 = (signed char)101;
int zero = 0;
unsigned short var_13 = (unsigned short)14306;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)82;
int var_17 = -407613681;
unsigned char var_18 = (unsigned char)76;
unsigned char var_19 = (unsigned char)25;
unsigned int arr_2 [11] [11] ;
unsigned short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 572875072U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)47744;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
