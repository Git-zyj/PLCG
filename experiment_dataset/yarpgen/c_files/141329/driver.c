#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12841300937831114972ULL;
unsigned short var_5 = (unsigned short)59676;
unsigned long long int var_7 = 2334426533098008048ULL;
signed char var_8 = (signed char)-84;
int zero = 0;
int var_11 = 1013377318;
unsigned int var_12 = 1212071349U;
signed char var_13 = (signed char)34;
unsigned short var_14 = (unsigned short)31158;
signed char var_15 = (signed char)-14;
short var_16 = (short)-22004;
signed char arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned short arr_4 [25] ;
unsigned short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-56 : (signed char)82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)234 : (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)38803;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23859 : (unsigned short)25135;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
