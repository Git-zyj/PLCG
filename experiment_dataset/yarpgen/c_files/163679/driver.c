#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7861513073964732760LL;
short var_4 = (short)28576;
unsigned short var_6 = (unsigned short)54099;
unsigned long long int var_8 = 1308638013729446878ULL;
signed char var_10 = (signed char)25;
unsigned long long int var_13 = 9427443152069553930ULL;
int zero = 0;
signed char var_19 = (signed char)-125;
signed char var_20 = (signed char)26;
unsigned int var_21 = 2982462358U;
short var_22 = (short)27623;
unsigned long long int var_23 = 17980816782108353306ULL;
long long int var_24 = -8717868063903623546LL;
short arr_1 [19] ;
unsigned short arr_2 [19] ;
_Bool arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)2243;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)55020;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
