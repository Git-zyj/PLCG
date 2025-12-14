#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned long long int var_1 = 1095143840216347826ULL;
signed char var_3 = (signed char)(-127 - 1);
unsigned int var_4 = 1746711274U;
unsigned short var_5 = (unsigned short)43992;
unsigned short var_6 = (unsigned short)1898;
int var_7 = -356967192;
int var_12 = -939182112;
int zero = 0;
short var_17 = (short)-12761;
unsigned char var_18 = (unsigned char)60;
unsigned int var_19 = 439078485U;
unsigned char var_20 = (unsigned char)220;
int var_21 = 1157436384;
long long int arr_2 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2614155242181315163LL;
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
