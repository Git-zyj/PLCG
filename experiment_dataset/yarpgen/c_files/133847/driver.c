#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1480322633048493827LL;
int var_2 = 86031667;
int var_3 = -1274965145;
unsigned char var_4 = (unsigned char)42;
unsigned long long int var_5 = 14056306169428400326ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)99;
int var_9 = 1155242501;
int zero = 0;
int var_13 = 914610990;
unsigned short var_14 = (unsigned short)49724;
unsigned char var_15 = (unsigned char)37;
long long int var_16 = 4977744707497026393LL;
unsigned int arr_4 [15] [15] ;
int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 1873912443U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 88861910 : -118427055;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
