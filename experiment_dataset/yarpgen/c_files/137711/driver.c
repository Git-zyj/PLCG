#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28135;
int var_3 = -1734404383;
unsigned char var_4 = (unsigned char)59;
short var_5 = (short)-11319;
unsigned short var_6 = (unsigned short)9617;
short var_7 = (short)22439;
int zero = 0;
unsigned int var_10 = 3321630166U;
signed char var_11 = (signed char)-77;
signed char var_12 = (signed char)-127;
unsigned int var_13 = 414115572U;
signed char var_14 = (signed char)71;
unsigned short var_15 = (unsigned short)18598;
unsigned char var_16 = (unsigned char)223;
int var_17 = 735375674;
int var_18 = 1744301609;
unsigned int arr_1 [18] ;
_Bool arr_4 [12] ;
unsigned short arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3284468474U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)44514;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
