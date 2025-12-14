#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)944;
unsigned char var_1 = (unsigned char)12;
unsigned int var_2 = 2804211447U;
int var_3 = -1829668654;
int var_4 = 250732995;
signed char var_9 = (signed char)-113;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)25;
unsigned int var_17 = 929401679U;
int zero = 0;
unsigned int var_19 = 2837525647U;
unsigned char var_20 = (unsigned char)245;
int var_21 = -84836045;
long long int var_22 = 2915864167191164708LL;
int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1700067271;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
