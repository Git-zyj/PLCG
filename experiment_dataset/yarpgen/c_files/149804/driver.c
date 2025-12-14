#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 749001196U;
unsigned char var_4 = (unsigned char)94;
unsigned int var_5 = 103833445U;
long long int var_7 = 5964083860280622727LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-112;
short var_16 = (short)-26447;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-19;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
long long int var_23 = 5097266781121986787LL;
long long int var_24 = 3038905785644949313LL;
unsigned short var_25 = (unsigned short)23003;
short var_26 = (short)-5464;
long long int var_27 = 5147040397458270813LL;
unsigned int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 205256734U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
