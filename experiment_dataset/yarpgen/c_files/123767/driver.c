#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16549;
unsigned short var_2 = (unsigned short)49104;
unsigned short var_5 = (unsigned short)47444;
signed char var_7 = (signed char)47;
unsigned short var_9 = (unsigned short)59430;
unsigned long long int var_12 = 3903811590262291719ULL;
int zero = 0;
unsigned long long int var_15 = 11164966966222899250ULL;
int var_16 = 1877626494;
long long int var_17 = -7949045929596894326LL;
short var_18 = (short)-19996;
unsigned long long int var_19 = 17570278451478054273ULL;
unsigned char arr_0 [14] ;
unsigned int arr_1 [14] ;
long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 575312608U : 2449764696U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3010437516628495586LL : -6030312348578201640LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
