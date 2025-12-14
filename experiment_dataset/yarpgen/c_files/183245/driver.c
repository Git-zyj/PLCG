#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_7 = 2038425939;
short var_9 = (short)-8116;
long long int var_10 = -245173672544571959LL;
unsigned short var_11 = (unsigned short)3063;
int zero = 0;
signed char var_13 = (signed char)67;
unsigned char var_14 = (unsigned char)226;
long long int var_15 = 4944646897683523574LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1430488453323241605LL;
long long int var_18 = 1315245883721947586LL;
unsigned short var_19 = (unsigned short)50931;
unsigned char arr_0 [14] ;
long long int arr_1 [14] ;
_Bool arr_4 [14] [14] ;
long long int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -4840096469939989392LL : 7100418256657545323LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -6621665031434146378LL : 4442376881624905633LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
