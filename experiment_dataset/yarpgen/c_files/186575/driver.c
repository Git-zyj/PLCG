#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
unsigned int var_1 = 4045766161U;
long long int var_3 = 290217268312043077LL;
unsigned short var_4 = (unsigned short)42937;
signed char var_5 = (signed char)39;
signed char var_9 = (signed char)72;
unsigned short var_10 = (unsigned short)56885;
short var_13 = (short)10925;
signed char var_16 = (signed char)29;
short var_18 = (short)9319;
int zero = 0;
unsigned int var_19 = 809987463U;
unsigned short var_20 = (unsigned short)44171;
unsigned char var_21 = (unsigned char)31;
unsigned short var_22 = (unsigned short)27592;
unsigned long long int arr_0 [10] ;
long long int arr_1 [10] ;
int arr_2 [10] [10] ;
long long int arr_3 [10] [10] [10] ;
int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1205112083478356454ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 5611618793685564017LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -118493173;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1871537474464800155LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 460731194;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
