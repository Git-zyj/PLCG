#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
short var_2 = (short)-8077;
long long int var_5 = -3867909078369849729LL;
signed char var_6 = (signed char)53;
long long int var_7 = -9018686726204765161LL;
short var_9 = (short)11482;
unsigned int var_11 = 3756518036U;
int zero = 0;
unsigned short var_12 = (unsigned short)42643;
short var_13 = (short)-15132;
unsigned short var_14 = (unsigned short)27835;
short var_15 = (short)14927;
signed char var_16 = (signed char)-6;
signed char var_17 = (signed char)80;
long long int var_18 = 8742544659058700237LL;
int var_19 = -2080101795;
long long int var_20 = 2013613973907664796LL;
signed char var_21 = (signed char)94;
signed char var_22 = (signed char)-25;
short var_23 = (short)-24398;
signed char var_24 = (signed char)119;
unsigned long long int var_25 = 9600228171041118381ULL;
short arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_2 [22] ;
signed char arr_5 [12] ;
long long int arr_13 [16] ;
int arr_3 [22] ;
unsigned short arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-142;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = -672833577389204954LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -2042112663;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5890 : (unsigned short)25251;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
