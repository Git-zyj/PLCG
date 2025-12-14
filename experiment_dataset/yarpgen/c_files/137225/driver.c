#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3178298640U;
short var_7 = (short)7141;
unsigned int var_12 = 2165848184U;
signed char var_13 = (signed char)101;
short var_15 = (short)-16934;
short var_17 = (short)-18686;
signed char var_18 = (signed char)-29;
int zero = 0;
signed char var_19 = (signed char)-38;
unsigned long long int var_20 = 16619639801358345604ULL;
signed char var_21 = (signed char)-77;
unsigned int var_22 = 1665777197U;
unsigned long long int var_23 = 16034639656127935699ULL;
signed char var_24 = (signed char)21;
unsigned char var_25 = (unsigned char)52;
unsigned long long int var_26 = 136397727873143246ULL;
short arr_3 [15] [15] ;
signed char arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-28154;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-124;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
