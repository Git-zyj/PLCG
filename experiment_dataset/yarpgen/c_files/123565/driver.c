#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30713;
short var_5 = (short)-28550;
short var_6 = (short)-20383;
signed char var_8 = (signed char)86;
unsigned char var_9 = (unsigned char)68;
short var_10 = (short)28633;
unsigned short var_12 = (unsigned short)62973;
short var_17 = (short)22017;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14438532800033462230ULL;
unsigned long long int var_22 = 7031234181570407397ULL;
long long int var_23 = 4407403922992195501LL;
short var_24 = (short)-10254;
int arr_0 [19] ;
short arr_1 [19] ;
long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -367381100 : -1574089845;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -8047162957562892790LL : 8459567682002321631LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
