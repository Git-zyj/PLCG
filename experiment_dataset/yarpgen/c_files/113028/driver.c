#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
unsigned short var_3 = (unsigned short)45694;
unsigned short var_5 = (unsigned short)20349;
_Bool var_7 = (_Bool)1;
int var_8 = 1862863156;
_Bool var_9 = (_Bool)0;
long long int var_11 = -3732960651392203429LL;
unsigned char var_12 = (unsigned char)123;
_Bool var_13 = (_Bool)1;
short var_14 = (short)9065;
unsigned long long int var_16 = 15068517962456215482ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = 812867259;
short var_20 = (short)-8514;
unsigned int var_21 = 3703769381U;
unsigned int arr_1 [14] [14] ;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2151570876U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)19 : (signed char)-28;
}

void checksum() {
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
