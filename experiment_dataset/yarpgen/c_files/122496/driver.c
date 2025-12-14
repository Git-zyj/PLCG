#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31857;
short var_8 = (short)-19813;
unsigned int var_10 = 4047727527U;
unsigned long long int var_14 = 9646134121284625530ULL;
unsigned char var_18 = (unsigned char)66;
int zero = 0;
unsigned short var_19 = (unsigned short)24089;
long long int var_20 = 5281364725476341022LL;
short var_21 = (short)7154;
unsigned int var_22 = 2408394491U;
unsigned long long int var_23 = 6908078143969543685ULL;
unsigned long long int var_24 = 5005775308785367291ULL;
int arr_0 [14] [14] ;
_Bool arr_3 [14] ;
unsigned short arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 787701444;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)26077;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
