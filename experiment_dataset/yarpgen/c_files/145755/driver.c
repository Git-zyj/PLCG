#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1316268879U;
unsigned short var_2 = (unsigned short)58542;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)2042;
unsigned int var_9 = 3872790346U;
long long int var_10 = -5445224973154510341LL;
unsigned int var_12 = 2267952619U;
unsigned char var_15 = (unsigned char)59;
short var_17 = (short)-12523;
int zero = 0;
unsigned int var_18 = 3469231664U;
unsigned int var_19 = 2927134110U;
unsigned short var_20 = (unsigned short)7730;
_Bool arr_2 [25] ;
unsigned char arr_5 [25] ;
unsigned int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 4022226377U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
