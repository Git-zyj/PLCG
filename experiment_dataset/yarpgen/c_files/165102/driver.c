#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28920;
long long int var_6 = -4804077487877251974LL;
unsigned short var_8 = (unsigned short)28558;
signed char var_9 = (signed char)24;
int zero = 0;
unsigned char var_10 = (unsigned char)193;
int var_11 = 244920340;
unsigned char var_12 = (unsigned char)184;
short var_13 = (short)-2868;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)25191;
signed char arr_2 [22] ;
short arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-11327 : (short)21477;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
