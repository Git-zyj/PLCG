#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)18;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = -122054203;
unsigned long long int var_6 = 11365516633464038838ULL;
unsigned short var_7 = (unsigned short)36414;
long long int var_9 = 8976754950653718786LL;
unsigned char var_12 = (unsigned char)184;
unsigned long long int var_13 = 2033009104351537616ULL;
int zero = 0;
signed char var_14 = (signed char)47;
signed char var_15 = (signed char)-105;
signed char var_16 = (signed char)103;
short var_17 = (short)-14297;
long long int var_18 = -6123713878638503770LL;
unsigned char var_19 = (unsigned char)69;
unsigned char arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)201;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
