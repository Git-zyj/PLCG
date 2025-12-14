#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-72;
unsigned long long int var_6 = 1609992676201469852ULL;
short var_11 = (short)-5957;
signed char var_12 = (signed char)75;
int zero = 0;
int var_14 = -335237192;
short var_15 = (short)-18615;
unsigned short var_16 = (unsigned short)8652;
unsigned short var_17 = (unsigned short)24295;
unsigned short var_18 = (unsigned short)19830;
long long int var_19 = 3560600224498476265LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3622944957U;
int var_22 = -604319716;
unsigned short var_23 = (unsigned short)38247;
unsigned long long int var_24 = 570012444222218823ULL;
signed char arr_0 [21] ;
signed char arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)10 : (signed char)-9;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
