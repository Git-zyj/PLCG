#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
short var_2 = (short)-9830;
long long int var_6 = 7521786137874505808LL;
unsigned short var_7 = (unsigned short)59190;
short var_10 = (short)6109;
signed char var_13 = (signed char)-99;
signed char var_14 = (signed char)-40;
unsigned short var_15 = (unsigned short)36568;
unsigned char var_16 = (unsigned char)130;
short var_17 = (short)32044;
int zero = 0;
signed char var_18 = (signed char)-53;
long long int var_19 = 6893852997942081856LL;
short var_20 = (short)26447;
int var_21 = 1620588246;
unsigned short var_22 = (unsigned short)53517;
_Bool arr_2 [23] ;
int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -455142150;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
