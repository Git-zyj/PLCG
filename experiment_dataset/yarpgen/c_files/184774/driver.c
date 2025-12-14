#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 879487980;
unsigned short var_2 = (unsigned short)39809;
unsigned char var_6 = (unsigned char)104;
signed char var_7 = (signed char)5;
int var_8 = -1321168051;
unsigned char var_12 = (unsigned char)65;
unsigned int var_15 = 1197234101U;
unsigned short var_16 = (unsigned short)43827;
int zero = 0;
unsigned char var_19 = (unsigned char)207;
unsigned short var_20 = (unsigned short)2600;
long long int var_21 = -1552294563980737851LL;
unsigned char var_22 = (unsigned char)201;
signed char var_23 = (signed char)127;
signed char var_24 = (signed char)46;
signed char arr_0 [21] ;
long long int arr_1 [21] ;
unsigned int arr_2 [21] ;
int arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -378490411720867771LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1220937226U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -1646426903;
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
