#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1963;
unsigned int var_2 = 2015733278U;
long long int var_3 = 1944233272403585089LL;
short var_7 = (short)-2147;
unsigned char var_8 = (unsigned char)224;
long long int var_11 = -563296345175144213LL;
int zero = 0;
short var_12 = (short)-9058;
unsigned int var_13 = 279119159U;
unsigned char var_14 = (unsigned char)143;
int var_15 = -1305334547;
int arr_0 [12] [12] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 363699872 : -659632410;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46389 : (unsigned short)42067;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
