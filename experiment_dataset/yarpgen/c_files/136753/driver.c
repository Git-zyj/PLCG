#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)71;
short var_10 = (short)23709;
long long int var_12 = -1138272210876778423LL;
short var_17 = (short)-28526;
unsigned short var_18 = (unsigned short)56768;
int zero = 0;
int var_19 = -703595841;
unsigned short var_20 = (unsigned short)19197;
int var_21 = -1378512659;
unsigned long long int var_22 = 1327442283590644441ULL;
unsigned short arr_0 [10] ;
_Bool arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)30902;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
