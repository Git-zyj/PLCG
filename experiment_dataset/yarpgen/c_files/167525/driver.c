#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2109746151;
unsigned short var_1 = (unsigned short)65348;
short var_2 = (short)-14978;
short var_3 = (short)25321;
unsigned long long int var_4 = 9484756030292144216ULL;
unsigned long long int var_5 = 1182504309872376083ULL;
int var_6 = 934381366;
unsigned long long int var_7 = 7656866884710634337ULL;
long long int var_8 = -8759624538945486161LL;
unsigned short var_10 = (unsigned short)59859;
int zero = 0;
signed char var_11 = (signed char)-95;
unsigned long long int var_12 = 10358306409401146821ULL;
long long int var_13 = 2560592553107802069LL;
unsigned long long int var_14 = 746927544011846375ULL;
unsigned short var_15 = (unsigned short)45595;
unsigned long long int var_16 = 6283819590098599420ULL;
unsigned short var_17 = (unsigned short)6225;
int var_18 = -1461197702;
signed char arr_2 [19] [19] ;
unsigned short arr_8 [19] [19] ;
short arr_9 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)25313;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-21264;
}

void checksum() {
    hash(&seed, var_11);
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
