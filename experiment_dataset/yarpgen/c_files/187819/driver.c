#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45208;
long long int var_3 = 2993020234520250607LL;
unsigned short var_6 = (unsigned short)31420;
signed char var_7 = (signed char)91;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-125;
unsigned int var_13 = 841254179U;
signed char var_14 = (signed char)-102;
unsigned short var_15 = (unsigned short)21977;
unsigned short var_16 = (unsigned short)44363;
long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -4615201167330025761LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
