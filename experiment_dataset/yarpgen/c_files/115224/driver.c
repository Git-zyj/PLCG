#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8708100384516073747ULL;
unsigned char var_2 = (unsigned char)126;
int var_7 = -166010817;
unsigned short var_10 = (unsigned short)42675;
unsigned long long int var_11 = 10664760989772912415ULL;
unsigned char var_12 = (unsigned char)109;
long long int var_13 = -3228673170172735887LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)69;
_Bool var_18 = (_Bool)0;
short var_19 = (short)4352;
_Bool var_20 = (_Bool)1;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 880652720U;
}

void checksum() {
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
