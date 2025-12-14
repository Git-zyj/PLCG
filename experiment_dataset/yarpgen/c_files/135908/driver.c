#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31504;
short var_1 = (short)18255;
int var_6 = 2014748968;
unsigned int var_7 = 1324463458U;
unsigned char var_8 = (unsigned char)75;
short var_9 = (short)29227;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)93;
int var_12 = 1119656262;
int var_13 = -744876061;
int zero = 0;
unsigned int var_14 = 2162471900U;
unsigned int var_15 = 2964707797U;
long long int var_16 = 7694946141161940882LL;
long long int var_17 = 5763958695426407455LL;
short var_18 = (short)6813;
_Bool var_19 = (_Bool)1;
int var_20 = 1016315188;
_Bool var_21 = (_Bool)1;
short var_22 = (short)17117;
signed char var_23 = (signed char)-34;
_Bool var_24 = (_Bool)0;
int var_25 = -1746502976;
int arr_1 [19] ;
signed char arr_2 [19] ;
signed char arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -2037327421;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)22;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)28;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
