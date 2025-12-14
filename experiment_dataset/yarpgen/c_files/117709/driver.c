#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7029;
unsigned char var_2 = (unsigned char)145;
signed char var_5 = (signed char)117;
_Bool var_9 = (_Bool)0;
short var_13 = (short)6252;
short var_15 = (short)27111;
int zero = 0;
unsigned char var_18 = (unsigned char)190;
unsigned short var_19 = (unsigned short)27139;
unsigned short var_20 = (unsigned short)22245;
signed char var_21 = (signed char)-126;
unsigned int var_22 = 2761155129U;
int arr_0 [24] ;
_Bool arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1380692173;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
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
