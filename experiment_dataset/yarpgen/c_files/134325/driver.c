#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -88499276;
short var_3 = (short)-15927;
int zero = 0;
unsigned char var_10 = (unsigned char)152;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14245967083880964984ULL;
signed char var_13 = (signed char)122;
unsigned char var_14 = (unsigned char)96;
long long int var_15 = 8214397320336929739LL;
signed char arr_1 [18] ;
signed char arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-97 : (signed char)35;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
