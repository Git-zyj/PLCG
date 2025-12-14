#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15404935379096256434ULL;
short var_2 = (short)-25954;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)83;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1321360518;
int var_17 = 457853546;
short var_18 = (short)26693;
int var_19 = -1236457127;
int var_20 = 545396931;
unsigned char var_21 = (unsigned char)64;
long long int var_22 = 104552871824170788LL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 2075873540U;
unsigned char arr_4 [17] ;
unsigned int arr_8 [17] ;
int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3010658535U : 4173426231U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -405185052 : -41370506;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
