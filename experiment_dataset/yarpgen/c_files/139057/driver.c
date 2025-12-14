#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
signed char var_1 = (signed char)-69;
short var_2 = (short)25192;
signed char var_5 = (signed char)-74;
unsigned long long int var_12 = 4971080017435826895ULL;
int zero = 0;
signed char var_13 = (signed char)98;
unsigned long long int var_14 = 5829161923225186619ULL;
unsigned long long int var_15 = 12585574294251360489ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)101;
_Bool arr_0 [11] [11] ;
short arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-3570;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
