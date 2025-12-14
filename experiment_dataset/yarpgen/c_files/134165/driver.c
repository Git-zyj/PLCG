#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
long long int var_3 = 3784728656723795983LL;
unsigned char var_4 = (unsigned char)37;
signed char var_6 = (signed char)56;
short var_8 = (short)-2027;
unsigned int var_9 = 1040516381U;
int zero = 0;
short var_13 = (short)-2908;
unsigned short var_14 = (unsigned short)6936;
unsigned long long int var_15 = 12265647874247977723ULL;
unsigned char var_16 = (unsigned char)127;
signed char var_17 = (signed char)57;
short arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-4244;
}

void checksum() {
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
