#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2125693256691375201LL;
unsigned char var_6 = (unsigned char)127;
unsigned short var_9 = (unsigned short)19705;
unsigned int var_10 = 1894033610U;
short var_11 = (short)4380;
unsigned short var_13 = (unsigned short)5696;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)113;
unsigned short var_18 = (unsigned short)27873;
unsigned char var_19 = (unsigned char)117;
short var_20 = (short)-3583;
unsigned long long int var_21 = 7104822794447145537ULL;
unsigned char arr_1 [25] ;
_Bool arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
