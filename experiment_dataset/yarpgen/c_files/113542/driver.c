#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36079;
unsigned char var_2 = (unsigned char)125;
unsigned short var_4 = (unsigned short)55307;
unsigned short var_6 = (unsigned short)52125;
long long int var_7 = 396497981271792466LL;
unsigned short var_8 = (unsigned short)62234;
int var_10 = 814746977;
unsigned char var_12 = (unsigned char)101;
int var_13 = 836040291;
long long int var_15 = 1380778518902410099LL;
int zero = 0;
unsigned short var_19 = (unsigned short)2393;
short var_20 = (short)-20458;
long long int var_21 = 5949971937526702161LL;
unsigned char var_22 = (unsigned char)115;
short var_23 = (short)15666;
unsigned short var_24 = (unsigned short)15705;
unsigned short arr_0 [21] ;
unsigned short arr_3 [21] ;
short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3400 : (unsigned short)53382;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)59933;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)21630;
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
