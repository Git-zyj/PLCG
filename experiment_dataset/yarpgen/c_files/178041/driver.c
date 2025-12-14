#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8260;
unsigned char var_1 = (unsigned char)165;
unsigned int var_6 = 2093142959U;
unsigned long long int var_10 = 12552464343054929985ULL;
long long int var_12 = 6878735695791395355LL;
short var_13 = (short)9772;
short var_17 = (short)-13915;
int zero = 0;
short var_19 = (short)-14908;
unsigned short var_20 = (unsigned short)52800;
short var_21 = (short)-17417;
unsigned short var_22 = (unsigned short)37995;
short var_23 = (short)24680;
unsigned char arr_1 [17] [17] ;
unsigned int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 463994004U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
