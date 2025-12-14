#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2225583591U;
signed char var_3 = (signed char)117;
signed char var_7 = (signed char)67;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)-64;
signed char var_13 = (signed char)62;
int zero = 0;
int var_17 = -1455585306;
unsigned int var_18 = 1613305406U;
unsigned char var_19 = (unsigned char)76;
unsigned int var_20 = 1719693360U;
unsigned long long int var_21 = 5977774416512306814ULL;
signed char arr_0 [25] ;
short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)24053;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
