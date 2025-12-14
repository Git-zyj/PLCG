#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31093;
signed char var_3 = (signed char)-49;
unsigned int var_5 = 1414891895U;
unsigned char var_7 = (unsigned char)160;
long long int var_9 = 3481808114495734842LL;
int zero = 0;
signed char var_10 = (signed char)-50;
long long int var_11 = -4830722998881664459LL;
unsigned char var_12 = (unsigned char)45;
int var_13 = -1309491263;
short arr_0 [20] ;
_Bool arr_3 [20] ;
unsigned int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-14621 : (short)-2258;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 555818187U : 488527699U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
