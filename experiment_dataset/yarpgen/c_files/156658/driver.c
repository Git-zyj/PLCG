#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
short var_1 = (short)28938;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)64538;
unsigned int var_4 = 1746102759U;
unsigned int var_7 = 3913959206U;
unsigned short var_8 = (unsigned short)15585;
short var_9 = (short)32351;
unsigned char var_13 = (unsigned char)153;
int zero = 0;
signed char var_14 = (signed char)76;
unsigned char var_15 = (unsigned char)196;
unsigned int var_16 = 1119591150U;
unsigned short var_17 = (unsigned short)19539;
unsigned short var_18 = (unsigned short)7323;
unsigned int var_19 = 2827864036U;
long long int var_20 = 7840868670920817425LL;
int var_21 = -44819492;
signed char arr_6 [14] [14] [14] [14] ;
unsigned int arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)75 : (signed char)71;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2313141785U : 4238853123U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
