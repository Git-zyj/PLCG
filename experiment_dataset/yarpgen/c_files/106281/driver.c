#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7249382390236673605LL;
unsigned short var_7 = (unsigned short)4854;
long long int var_14 = 8697659507938429826LL;
unsigned short var_16 = (unsigned short)43701;
int zero = 0;
unsigned short var_17 = (unsigned short)54116;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)201;
unsigned int var_20 = 2535466434U;
unsigned int var_21 = 1674336030U;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_2 [14] ;
long long int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 12203537020429039669ULL : 10545425922423022625ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -8201350472049155691LL : -2287051513359711217LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
