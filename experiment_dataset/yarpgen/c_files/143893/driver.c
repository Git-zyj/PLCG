#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2449667189U;
signed char var_5 = (signed char)21;
short var_9 = (short)-2747;
unsigned short var_12 = (unsigned short)27258;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 14967848153085016412ULL;
int zero = 0;
signed char var_19 = (signed char)10;
unsigned short var_20 = (unsigned short)34255;
unsigned short var_21 = (unsigned short)54508;
int var_22 = -1036356661;
unsigned short arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)6368;
}

void checksum() {
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
