#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2089612706U;
unsigned char var_4 = (unsigned char)148;
long long int var_5 = 3305884105036997294LL;
signed char var_7 = (signed char)72;
signed char var_11 = (signed char)64;
int zero = 0;
unsigned int var_12 = 692045207U;
signed char var_13 = (signed char)-112;
short var_14 = (short)-5475;
unsigned long long int var_15 = 4163973471787787528ULL;
unsigned char var_16 = (unsigned char)66;
unsigned char var_17 = (unsigned char)67;
unsigned long long int var_18 = 3541807884768650409ULL;
unsigned int arr_0 [19] ;
int arr_1 [19] ;
unsigned char arr_2 [19] [19] [19] ;
unsigned short arr_3 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3743714207U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 392323714;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)206 : (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)919;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
