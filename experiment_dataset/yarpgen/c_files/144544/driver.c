#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39332;
unsigned char var_3 = (unsigned char)122;
long long int var_4 = 8982963155792556438LL;
unsigned long long int var_5 = 2205681165586817019ULL;
short var_6 = (short)-29684;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)3596;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1372653930U;
unsigned short var_13 = (unsigned short)46530;
int zero = 0;
unsigned short var_16 = (unsigned short)56572;
unsigned int var_17 = 3985466492U;
unsigned short var_18 = (unsigned short)16249;
unsigned char var_19 = (unsigned char)207;
unsigned int arr_0 [24] [24] ;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 4221159578U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)65289;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
