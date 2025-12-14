#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18824;
int var_3 = 22270381;
unsigned long long int var_6 = 9418422329250877454ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 3754149438U;
long long int var_14 = 2205553260080649730LL;
int zero = 0;
unsigned long long int var_15 = 765550255634439918ULL;
unsigned char var_16 = (unsigned char)226;
int var_17 = -1481833585;
signed char arr_0 [18] [18] ;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)28719;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
