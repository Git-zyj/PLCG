#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30060;
unsigned long long int var_3 = 10044293401038737931ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 2903530234753853160ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 1642433838;
unsigned long long int var_14 = 10390122357804306899ULL;
unsigned long long int var_16 = 9452085104931430507ULL;
int var_17 = 1712409880;
short var_19 = (short)-2063;
int zero = 0;
short var_20 = (short)-5171;
short var_21 = (short)28377;
unsigned long long int var_22 = 4417693359418311916ULL;
unsigned long long int var_23 = 13144245851190603814ULL;
int var_24 = -394160893;
short var_25 = (short)3748;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
