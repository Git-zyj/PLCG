#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)221;
int var_10 = 1633606228;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)-26621;
unsigned char var_15 = (unsigned char)134;
int var_16 = -1784962150;
unsigned char var_17 = (unsigned char)60;
short var_18 = (short)-6892;
short var_19 = (short)976;
unsigned long long int var_20 = 9886027708666936323ULL;
unsigned short arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16699 : (unsigned short)63767;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1820692393U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 16483851081319498093ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
