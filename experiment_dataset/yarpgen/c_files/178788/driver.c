#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -1364545145082327295LL;
unsigned int var_6 = 3139310558U;
unsigned char var_7 = (unsigned char)178;
unsigned short var_8 = (unsigned short)6163;
unsigned int var_9 = 802076868U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 420333180U;
long long int var_13 = 3316713254022837280LL;
unsigned short var_14 = (unsigned short)47174;
unsigned int var_15 = 2976416226U;
int var_16 = 526107761;
int zero = 0;
unsigned char var_20 = (unsigned char)19;
long long int var_21 = -5775366504043164520LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 2070295827674591455ULL;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)31796;
long long int var_26 = -6780220462873290840LL;
unsigned int var_27 = 345115446U;
signed char arr_2 [11] ;
long long int arr_3 [11] [11] ;
signed char arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 755659264406978798LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-15;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
