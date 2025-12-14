#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1628226529;
short var_2 = (short)-16552;
int var_5 = 1726323457;
unsigned int var_6 = 668737376U;
unsigned char var_7 = (unsigned char)140;
short var_8 = (short)-20576;
int var_9 = 1297889729;
unsigned long long int var_13 = 16808151994616231109ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)26595;
short var_17 = (short)-32570;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-21;
unsigned char arr_2 [19] ;
int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -14173504;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
