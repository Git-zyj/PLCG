#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6910504068202888074LL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1735180603U;
_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)48253;
int var_9 = -1722254120;
int zero = 0;
int var_14 = -1373747998;
unsigned long long int var_15 = 13530360831642035066ULL;
unsigned long long int var_16 = 11734277043896536722ULL;
short var_17 = (short)9274;
int arr_0 [16] ;
unsigned long long int arr_2 [16] [16] ;
unsigned long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1480926237;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 12030810462062531649ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 14071970666885705358ULL;
}

void checksum() {
    hash(&seed, var_14);
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
