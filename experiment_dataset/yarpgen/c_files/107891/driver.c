#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)225;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-9537;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3680249494226783163LL;
unsigned int var_10 = 409411191U;
unsigned int var_11 = 2642869659U;
int zero = 0;
unsigned short var_12 = (unsigned short)18818;
short var_13 = (short)9654;
unsigned short var_14 = (unsigned short)45139;
unsigned int var_15 = 2133254282U;
unsigned short var_16 = (unsigned short)61049;
unsigned short var_17 = (unsigned short)29410;
unsigned char var_18 = (unsigned char)152;
unsigned short var_19 = (unsigned short)24703;
short var_20 = (short)-13430;
unsigned char var_21 = (unsigned char)47;
unsigned char arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)91;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
