#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)50168;
short var_5 = (short)27389;
unsigned char var_9 = (unsigned char)119;
_Bool var_10 = (_Bool)0;
int var_14 = -248258281;
unsigned long long int var_15 = 4155668346574704090ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)33866;
signed char var_18 = (signed char)9;
signed char var_19 = (signed char)-123;
unsigned char var_20 = (unsigned char)5;
int var_21 = 162488776;
int var_22 = -84687147;
unsigned int var_23 = 2306004050U;
unsigned short arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)37204;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11429 : (unsigned short)40088;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
