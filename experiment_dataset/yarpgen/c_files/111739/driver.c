#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8205264837598570340ULL;
unsigned int var_3 = 3692548546U;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-12948;
unsigned short var_7 = (unsigned short)46179;
short var_11 = (short)19619;
long long int var_13 = 935509764982167047LL;
int var_15 = 1342477534;
signed char var_16 = (signed char)-115;
unsigned short var_18 = (unsigned short)45558;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-22477;
int var_21 = 1324104723;
unsigned char var_22 = (unsigned char)249;
signed char var_23 = (signed char)58;
_Bool var_24 = (_Bool)1;
long long int arr_3 [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 12641829433992038LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)22708;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
