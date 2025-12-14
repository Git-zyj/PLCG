#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-7;
unsigned short var_7 = (unsigned short)44053;
unsigned char var_8 = (unsigned char)111;
signed char var_10 = (signed char)-11;
unsigned long long int var_13 = 16660893008485155875ULL;
long long int var_15 = -9088841984000348116LL;
int zero = 0;
int var_17 = 2093814985;
unsigned long long int var_18 = 45239802758619385ULL;
short var_19 = (short)15298;
unsigned short var_20 = (unsigned short)62498;
unsigned char var_21 = (unsigned char)30;
int arr_0 [19] ;
unsigned short arr_4 [19] [19] ;
short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1174678074;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)6469;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)1297;
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
