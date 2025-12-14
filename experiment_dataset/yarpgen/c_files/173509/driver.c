#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2869549279U;
signed char var_1 = (signed char)-22;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)31805;
signed char var_8 = (signed char)-76;
unsigned long long int var_9 = 17581030025779902266ULL;
unsigned int var_13 = 2698400490U;
short var_15 = (short)-3708;
int zero = 0;
int var_17 = -921043776;
long long int var_18 = 2513947199833263594LL;
unsigned int var_19 = 1991690529U;
long long int var_20 = -3692617396598847493LL;
unsigned int var_21 = 316098217U;
unsigned char var_22 = (unsigned char)227;
signed char arr_1 [13] ;
_Bool arr_5 [14] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 2129081853949933862LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
