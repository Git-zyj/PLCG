#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2809381842U;
unsigned long long int var_2 = 8925987488674808021ULL;
long long int var_4 = -7779180334743853208LL;
signed char var_5 = (signed char)-63;
unsigned char var_7 = (unsigned char)229;
signed char var_9 = (signed char)-76;
signed char var_11 = (signed char)-76;
short var_12 = (short)19756;
unsigned int var_13 = 1703894111U;
long long int var_14 = 8629013038039163167LL;
unsigned char var_15 = (unsigned char)192;
int zero = 0;
unsigned short var_16 = (unsigned short)18116;
signed char var_17 = (signed char)49;
signed char var_18 = (signed char)-66;
_Bool var_19 = (_Bool)1;
short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-12188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)29737;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
