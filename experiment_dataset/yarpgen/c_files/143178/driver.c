#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)17;
unsigned long long int var_5 = 13513879838448638959ULL;
unsigned int var_6 = 1380139030U;
unsigned long long int var_7 = 12000612937084189099ULL;
unsigned char var_8 = (unsigned char)13;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)164;
long long int var_13 = 3283742320003250726LL;
unsigned long long int var_14 = 16224188812534131466ULL;
int var_15 = -77231699;
signed char var_16 = (signed char)27;
unsigned int var_17 = 3125260960U;
long long int var_18 = -2010622263657118443LL;
int var_19 = -863527843;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3970680036U;
}

void checksum() {
    hash(&seed, var_12);
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
