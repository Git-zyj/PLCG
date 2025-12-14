#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned long long int var_1 = 15142997046222558317ULL;
signed char var_2 = (signed char)90;
_Bool var_5 = (_Bool)1;
int var_6 = 883989087;
unsigned int var_7 = 914902535U;
unsigned short var_9 = (unsigned short)37063;
signed char var_10 = (signed char)67;
int zero = 0;
short var_11 = (short)-10469;
signed char var_12 = (signed char)51;
long long int var_13 = -1940992514173849549LL;
signed char var_14 = (signed char)35;
int var_15 = 1627768556;
unsigned long long int arr_0 [22] [22] ;
short arr_1 [22] ;
unsigned short arr_2 [22] ;
int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 12754342162203504909ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-4533;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)50633;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1092983754;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
