#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)227;
long long int var_9 = -5216918274280342438LL;
int var_14 = 1536828717;
int zero = 0;
signed char var_17 = (signed char)-31;
long long int var_18 = -5356040097405488017LL;
unsigned short var_19 = (unsigned short)64346;
unsigned char var_20 = (unsigned char)104;
signed char var_21 = (signed char)-87;
long long int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 7082631533182682877LL;
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
