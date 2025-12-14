#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
unsigned long long int var_2 = 12526399689096708597ULL;
int var_3 = -1491746116;
unsigned int var_5 = 2835005634U;
unsigned short var_6 = (unsigned short)41242;
long long int var_7 = 2198305166008797768LL;
unsigned long long int var_8 = 15523842357563942897ULL;
unsigned long long int var_9 = 3208306933200128633ULL;
unsigned short var_11 = (unsigned short)55996;
long long int var_12 = 1874700628548949663LL;
unsigned int var_13 = 2958893450U;
unsigned char var_14 = (unsigned char)84;
int var_15 = -1323385779;
unsigned int var_16 = 1594255486U;
unsigned char var_17 = (unsigned char)11;
unsigned short var_18 = (unsigned short)27537;
unsigned short var_19 = (unsigned short)49954;
int zero = 0;
unsigned char var_20 = (unsigned char)55;
long long int var_21 = -1621797467551641314LL;
short var_22 = (short)-14244;
unsigned int var_23 = 314143289U;
unsigned int var_24 = 4079924829U;
int var_25 = -451027748;
short var_26 = (short)-25064;
unsigned int arr_2 [16] ;
long long int arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1320562337U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 6753354801120898601LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
