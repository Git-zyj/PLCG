#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7760250950528344041LL;
unsigned int var_5 = 2490745975U;
unsigned char var_6 = (unsigned char)161;
unsigned short var_7 = (unsigned short)31997;
long long int var_8 = -4396993324925936781LL;
signed char var_10 = (signed char)78;
int var_15 = -1486995636;
int zero = 0;
unsigned short var_16 = (unsigned short)13672;
long long int var_17 = -4931567442639464945LL;
unsigned short var_18 = (unsigned short)27800;
unsigned int var_19 = 4122901454U;
_Bool arr_4 [12] ;
unsigned short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)4848;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
