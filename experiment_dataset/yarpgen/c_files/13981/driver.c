#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24402;
unsigned long long int var_6 = 1756661852912105386ULL;
int var_10 = -62241965;
unsigned short var_11 = (unsigned short)14604;
unsigned short var_12 = (unsigned short)14685;
unsigned long long int var_14 = 6447152749028349339ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = -660486903;
unsigned int var_20 = 1841199881U;
unsigned int var_21 = 4274389444U;
unsigned int var_22 = 410060653U;
unsigned long long int var_23 = 8822132508557628004ULL;
unsigned short var_24 = (unsigned short)16709;
int var_25 = -577468003;
signed char var_26 = (signed char)69;
int arr_0 [21] ;
unsigned int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1234874665;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3122176305U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
