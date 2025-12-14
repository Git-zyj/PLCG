#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned long long int var_1 = 4819324535333530206ULL;
signed char var_4 = (signed char)-44;
unsigned short var_5 = (unsigned short)37709;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 8069102543531458350ULL;
unsigned long long int var_8 = 5964499754994908298ULL;
signed char var_9 = (signed char)-60;
unsigned char var_10 = (unsigned char)135;
unsigned long long int var_11 = 3700753062628681843ULL;
int zero = 0;
int var_14 = 300040917;
unsigned short var_15 = (unsigned short)22935;
unsigned int var_16 = 3246019573U;
unsigned short var_17 = (unsigned short)49946;
unsigned short var_18 = (unsigned short)19084;
unsigned long long int var_19 = 12027641405698235175ULL;
unsigned short var_20 = (unsigned short)55359;
unsigned long long int arr_0 [10] ;
int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3435129260236102179ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 699018355;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
