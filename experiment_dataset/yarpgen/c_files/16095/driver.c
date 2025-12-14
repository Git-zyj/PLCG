#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 498029530U;
long long int var_3 = -6219346137201931712LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -4505757110042196393LL;
unsigned long long int var_8 = 480243967513488873ULL;
short var_9 = (short)27223;
int zero = 0;
unsigned short var_11 = (unsigned short)62740;
unsigned char var_12 = (unsigned char)55;
unsigned short var_13 = (unsigned short)17017;
_Bool var_14 = (_Bool)0;
long long int var_15 = 4176825206505701644LL;
unsigned char var_16 = (unsigned char)25;
short var_17 = (short)24635;
long long int arr_0 [11] ;
unsigned char arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -2967852650159935260LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)240;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
