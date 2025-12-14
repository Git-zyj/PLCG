#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29852;
int var_2 = -412396633;
short var_3 = (short)-14999;
long long int var_7 = 4260287967186200656LL;
unsigned int var_8 = 1172777207U;
short var_11 = (short)-18272;
int var_12 = 1537612949;
int zero = 0;
long long int var_19 = 6963292004408456314LL;
unsigned short var_20 = (unsigned short)43018;
long long int var_21 = -5245697784540949813LL;
long long int var_22 = -5217890560753698516LL;
signed char var_23 = (signed char)-44;
_Bool var_24 = (_Bool)0;
unsigned char arr_1 [25] [25] ;
unsigned char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)217 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)97;
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
