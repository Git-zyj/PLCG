#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
unsigned char var_1 = (unsigned char)21;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)93;
short var_5 = (short)30411;
short var_6 = (short)5117;
short var_7 = (short)10312;
unsigned short var_9 = (unsigned short)35823;
unsigned char var_11 = (unsigned char)141;
short var_12 = (short)25154;
int zero = 0;
unsigned short var_13 = (unsigned short)16094;
signed char var_14 = (signed char)77;
unsigned char var_15 = (unsigned char)184;
unsigned short var_16 = (unsigned short)27099;
unsigned char var_17 = (unsigned char)176;
signed char var_18 = (signed char)78;
unsigned char arr_1 [25] ;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)14147;
}

void checksum() {
    hash(&seed, var_13);
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
