#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60213;
unsigned char var_2 = (unsigned char)193;
unsigned long long int var_4 = 4380429120656465338ULL;
signed char var_5 = (signed char)85;
short var_7 = (short)-8612;
unsigned char var_8 = (unsigned char)128;
int var_9 = -3476179;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)171;
int var_12 = -1579391919;
unsigned long long int var_13 = 13460954386239106445ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-23495;
short arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-17893;
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
