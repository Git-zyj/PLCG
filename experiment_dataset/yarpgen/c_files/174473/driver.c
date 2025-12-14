#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15594316704559841874ULL;
unsigned long long int var_4 = 8213799556507060955ULL;
unsigned char var_10 = (unsigned char)35;
unsigned char var_13 = (unsigned char)157;
int zero = 0;
unsigned short var_18 = (unsigned short)50020;
short var_19 = (short)17502;
unsigned char var_20 = (unsigned char)103;
unsigned long long int var_21 = 1508390661042967063ULL;
unsigned short var_22 = (unsigned short)60484;
unsigned char arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned short arr_2 [25] ;
unsigned char arr_3 [25] ;
unsigned char arr_4 [25] ;
unsigned char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)23150;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)105 : (unsigned char)118;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
