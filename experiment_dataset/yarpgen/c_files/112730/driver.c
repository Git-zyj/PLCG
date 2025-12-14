#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29070;
int var_1 = -28049881;
signed char var_2 = (signed char)-107;
unsigned short var_3 = (unsigned short)58930;
signed char var_4 = (signed char)47;
unsigned char var_7 = (unsigned char)76;
short var_8 = (short)-31963;
long long int var_9 = 1905023528771971591LL;
long long int var_10 = 460066003903660551LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-91;
unsigned long long int var_13 = 1841370875288163069ULL;
unsigned char var_14 = (unsigned char)180;
unsigned short var_15 = (unsigned short)59536;
unsigned long long int var_16 = 7911113263569747788ULL;
int arr_3 [20] [20] ;
unsigned short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = -923122050;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)3267;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
