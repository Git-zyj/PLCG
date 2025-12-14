#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13406;
unsigned short var_1 = (unsigned short)20918;
unsigned int var_3 = 2330946499U;
int var_4 = -887359531;
unsigned short var_8 = (unsigned short)61020;
unsigned short var_9 = (unsigned short)63681;
int zero = 0;
int var_13 = -504018207;
signed char var_14 = (signed char)62;
unsigned short var_15 = (unsigned short)22175;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-59;
long long int var_18 = 8658739884986341933LL;
int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1856831702;
}

void checksum() {
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
