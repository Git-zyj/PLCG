#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
unsigned short var_1 = (unsigned short)455;
long long int var_4 = 4518016319854612735LL;
unsigned short var_12 = (unsigned short)42309;
int zero = 0;
unsigned int var_15 = 2558294427U;
signed char var_16 = (signed char)-125;
unsigned long long int var_17 = 14339612662656029101ULL;
signed char var_18 = (signed char)-40;
long long int var_19 = -3759643495073701131LL;
signed char var_20 = (signed char)-67;
unsigned long long int arr_0 [17] ;
_Bool arr_3 [17] [17] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 7269249383128731163ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-50;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
