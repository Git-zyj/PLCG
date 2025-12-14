#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -456595705;
short var_6 = (short)-3610;
unsigned char var_13 = (unsigned char)22;
int zero = 0;
unsigned long long int var_16 = 4489524262876465732ULL;
unsigned short var_17 = (unsigned short)48106;
unsigned short var_18 = (unsigned short)50412;
unsigned short var_19 = (unsigned short)30053;
unsigned short var_20 = (unsigned short)47020;
unsigned char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)149 : (unsigned char)170;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
