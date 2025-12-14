#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)18;
short var_3 = (short)-8267;
signed char var_4 = (signed char)-54;
signed char var_5 = (signed char)-61;
unsigned long long int var_8 = 17745752771713639150ULL;
short var_9 = (short)8991;
unsigned short var_11 = (unsigned short)59365;
int var_12 = 440676117;
unsigned short var_14 = (unsigned short)59523;
unsigned char var_15 = (unsigned char)84;
int zero = 0;
unsigned char var_16 = (unsigned char)145;
short var_17 = (short)27378;
signed char var_18 = (signed char)-89;
unsigned char var_19 = (unsigned char)85;
short var_20 = (short)-338;
signed char var_21 = (signed char)22;
unsigned char var_22 = (unsigned char)163;
unsigned short var_23 = (unsigned short)16528;
short var_24 = (short)14987;
unsigned char arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)163;
}

void checksum() {
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
