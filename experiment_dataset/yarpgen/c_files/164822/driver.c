#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1149176267;
unsigned long long int var_4 = 10857085768436967495ULL;
short var_5 = (short)-16712;
int var_6 = -1986688201;
int var_7 = -1106280743;
unsigned long long int var_9 = 2346324108549525401ULL;
int var_10 = 2029673049;
short var_12 = (short)-31035;
int var_13 = -2055779537;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 8749471176018083558ULL;
int var_19 = 747502012;
short var_20 = (short)-2279;
_Bool var_21 = (_Bool)0;
int var_22 = -458376882;
unsigned short arr_2 [21] [21] [21] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)57751;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)66;
}

void checksum() {
    hash(&seed, var_17);
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
