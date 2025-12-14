#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3879742059U;
unsigned long long int var_3 = 16110571886624184581ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-17241;
unsigned char var_6 = (unsigned char)60;
int var_7 = 1406026611;
unsigned long long int var_9 = 17194427527753173701ULL;
unsigned char var_11 = (unsigned char)207;
int zero = 0;
unsigned short var_12 = (unsigned short)53312;
unsigned short var_13 = (unsigned short)17421;
unsigned long long int var_14 = 12720974187265851993ULL;
long long int var_15 = -3183167284609660006LL;
unsigned int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3495450781U : 92226271U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
