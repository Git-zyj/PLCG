#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-107;
unsigned int var_7 = 1991393934U;
long long int var_9 = 1615062317737419140LL;
long long int var_11 = 8934411161475183022LL;
unsigned char var_12 = (unsigned char)121;
unsigned short var_13 = (unsigned short)41935;
short var_14 = (short)-26904;
unsigned short var_15 = (unsigned short)40451;
int zero = 0;
short var_17 = (short)28662;
unsigned short var_18 = (unsigned short)3738;
unsigned short var_19 = (unsigned short)42128;
unsigned int var_20 = 1318860034U;
_Bool var_21 = (_Bool)1;
unsigned char arr_4 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)138 : (unsigned char)166;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
