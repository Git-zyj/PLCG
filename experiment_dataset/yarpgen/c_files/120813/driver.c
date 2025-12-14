#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29998;
short var_1 = (short)-486;
signed char var_2 = (signed char)124;
unsigned long long int var_3 = 15980014649113095853ULL;
int var_5 = -760853206;
unsigned char var_6 = (unsigned char)158;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)90;
unsigned long long int var_9 = 399008926831389245ULL;
int zero = 0;
int var_10 = -192269912;
int var_11 = -1611273113;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-98;
unsigned long long int var_14 = 8220728907101384971ULL;
long long int var_15 = -6868303760752302008LL;
unsigned char var_16 = (unsigned char)78;
long long int var_17 = 911303123179985256LL;
short var_18 = (short)11050;
short arr_0 [16] ;
long long int arr_1 [16] ;
unsigned long long int arr_2 [20] ;
unsigned char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-663 : (short)2727;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 8714699166328506865LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 4037300786703816341ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)165;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
