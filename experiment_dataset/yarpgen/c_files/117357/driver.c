#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)123;
signed char var_3 = (signed char)-56;
unsigned short var_6 = (unsigned short)57598;
short var_8 = (short)3097;
short var_10 = (short)-1814;
unsigned char var_12 = (unsigned char)112;
short var_15 = (short)17640;
unsigned long long int var_19 = 4178481103595029085ULL;
int zero = 0;
short var_20 = (short)-26725;
unsigned char var_21 = (unsigned char)224;
short var_22 = (short)11412;
signed char var_23 = (signed char)27;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)202;
short var_26 = (short)23083;
short var_27 = (short)12544;
short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-24079;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
