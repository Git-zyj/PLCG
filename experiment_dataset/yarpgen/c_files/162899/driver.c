#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2599856463U;
short var_9 = (short)5745;
short var_11 = (short)2072;
signed char var_15 = (signed char)27;
unsigned short var_18 = (unsigned short)31619;
int zero = 0;
unsigned char var_19 = (unsigned char)177;
unsigned int var_20 = 2582264002U;
signed char var_21 = (signed char)-59;
unsigned long long int var_22 = 13332491582016861774ULL;
short var_23 = (short)-31282;
signed char var_24 = (signed char)77;
signed char var_25 = (signed char)18;
short arr_2 [18] ;
short arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-6861 : (short)-4034;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)18414 : (short)-2100;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
