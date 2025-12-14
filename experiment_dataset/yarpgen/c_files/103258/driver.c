#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
signed char var_2 = (signed char)-50;
unsigned char var_3 = (unsigned char)52;
unsigned long long int var_6 = 14608750413141016981ULL;
unsigned long long int var_8 = 13170468706823121233ULL;
int var_9 = 711787761;
unsigned long long int var_11 = 16116534860159456198ULL;
signed char var_13 = (signed char)106;
int var_14 = 1409575607;
int zero = 0;
unsigned short var_16 = (unsigned short)7712;
unsigned int var_17 = 2658398708U;
unsigned short var_18 = (unsigned short)43491;
unsigned short var_19 = (unsigned short)64979;
unsigned int var_20 = 1517520375U;
unsigned short arr_0 [11] ;
short arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)41996;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3568;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
