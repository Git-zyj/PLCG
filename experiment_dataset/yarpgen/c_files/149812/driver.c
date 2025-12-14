#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1514543707;
signed char var_3 = (signed char)107;
int var_4 = -1925517394;
short var_5 = (short)-29419;
long long int var_7 = 3297027298417899670LL;
unsigned char var_8 = (unsigned char)236;
unsigned char var_12 = (unsigned char)67;
signed char var_14 = (signed char)-4;
signed char var_16 = (signed char)-70;
int zero = 0;
short var_17 = (short)12133;
short var_18 = (short)-12700;
unsigned char var_19 = (unsigned char)171;
signed char var_20 = (signed char)-72;
unsigned int arr_0 [21] ;
_Bool arr_1 [21] ;
short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 879452417U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-11440;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
