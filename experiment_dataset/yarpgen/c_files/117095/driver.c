#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)189;
short var_3 = (short)-14888;
short var_4 = (short)-28589;
unsigned int var_5 = 1352679984U;
unsigned short var_6 = (unsigned short)11550;
int var_8 = 1748635946;
int var_9 = -1533465500;
unsigned short var_10 = (unsigned short)22047;
unsigned short var_11 = (unsigned short)32017;
int var_12 = -644166232;
int zero = 0;
short var_14 = (short)-16990;
unsigned char var_15 = (unsigned char)208;
unsigned char var_16 = (unsigned char)215;
long long int var_17 = -1147973991885723818LL;
unsigned short var_18 = (unsigned short)7139;
unsigned short arr_0 [14] [14] ;
long long int arr_1 [14] ;
long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)25196;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1557243921391998261LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 7283188719731786189LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
