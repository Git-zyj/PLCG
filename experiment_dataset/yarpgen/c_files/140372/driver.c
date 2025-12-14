#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26025;
int var_3 = -1018563193;
short var_5 = (short)-20772;
signed char var_6 = (signed char)105;
long long int var_7 = 4351360489399674172LL;
int var_8 = 424520965;
unsigned long long int var_9 = 6279094113880383723ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)53;
unsigned int var_15 = 1247092335U;
long long int var_16 = -1197592174987453774LL;
unsigned short var_17 = (unsigned short)47828;
signed char var_18 = (signed char)-9;
signed char var_19 = (signed char)-39;
long long int var_20 = 1952188368295967471LL;
unsigned short arr_0 [11] ;
signed char arr_2 [11] ;
long long int arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)61217;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 4958261043890279410LL : -8788897408850823429LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
