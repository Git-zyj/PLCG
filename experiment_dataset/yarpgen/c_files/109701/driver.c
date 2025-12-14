#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1857869572;
unsigned long long int var_3 = 12219023557195305016ULL;
short var_10 = (short)25628;
unsigned char var_13 = (unsigned char)52;
signed char var_15 = (signed char)120;
long long int var_16 = 6564148739121853401LL;
int var_17 = -1677613783;
int zero = 0;
unsigned long long int var_19 = 9117871529856083497ULL;
int var_20 = -2005869620;
unsigned char var_21 = (unsigned char)12;
long long int var_22 = 8609268735615573669LL;
unsigned char var_23 = (unsigned char)215;
unsigned int arr_1 [18] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 163382046U : 1346543032U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)219;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
