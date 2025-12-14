#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)124;
unsigned char var_6 = (unsigned char)170;
unsigned short var_7 = (unsigned short)60024;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-19218;
unsigned short var_13 = (unsigned short)690;
unsigned long long int var_15 = 2568084976073877451ULL;
int zero = 0;
unsigned long long int var_16 = 3611077431387089787ULL;
unsigned char var_17 = (unsigned char)98;
int var_18 = 1546172510;
long long int var_19 = -1156329763477376282LL;
unsigned short var_20 = (unsigned short)17666;
unsigned char var_21 = (unsigned char)246;
unsigned char var_22 = (unsigned char)41;
short arr_2 [19] [19] ;
_Bool arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)32492;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
