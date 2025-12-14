#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26346;
short var_4 = (short)-26789;
signed char var_13 = (signed char)54;
short var_14 = (short)10437;
unsigned short var_15 = (unsigned short)19717;
signed char var_16 = (signed char)-63;
unsigned int var_18 = 668232055U;
int zero = 0;
short var_20 = (short)6177;
short var_21 = (short)-26541;
unsigned short var_22 = (unsigned short)21538;
unsigned int var_23 = 1564309555U;
unsigned short var_24 = (unsigned short)53770;
signed char var_25 = (signed char)21;
unsigned short arr_5 [12] ;
short arr_8 [12] [12] [12] [12] ;
unsigned long long int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)39878;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-5414;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 678996976229481467ULL;
}

void checksum() {
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
