#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
int var_4 = 338693967;
short var_5 = (short)-17928;
signed char var_7 = (signed char)66;
unsigned char var_8 = (unsigned char)240;
int var_10 = -1592585303;
int zero = 0;
signed char var_12 = (signed char)17;
unsigned char var_13 = (unsigned char)164;
signed char var_14 = (signed char)-83;
signed char var_15 = (signed char)-10;
signed char var_16 = (signed char)80;
signed char var_17 = (signed char)67;
int arr_8 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -1157664929;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
