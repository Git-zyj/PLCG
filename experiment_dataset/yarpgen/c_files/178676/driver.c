#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 342369800U;
signed char var_6 = (signed char)-82;
signed char var_8 = (signed char)-102;
unsigned short var_9 = (unsigned short)29595;
unsigned char var_10 = (unsigned char)113;
int var_12 = 903275676;
int zero = 0;
unsigned char var_14 = (unsigned char)126;
unsigned char var_15 = (unsigned char)27;
signed char var_16 = (signed char)112;
unsigned short var_17 = (unsigned short)48763;
unsigned char var_18 = (unsigned char)183;
int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -184140034;
}

void checksum() {
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
