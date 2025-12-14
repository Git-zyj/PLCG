#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9641;
unsigned char var_4 = (unsigned char)239;
signed char var_7 = (signed char)56;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)59200;
long long int var_12 = -2878121451276198783LL;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)142;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-62;
signed char var_19 = (signed char)-92;
unsigned char var_20 = (unsigned char)182;
unsigned char var_21 = (unsigned char)18;
_Bool var_22 = (_Bool)1;
unsigned char arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)67 : (unsigned char)190;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
