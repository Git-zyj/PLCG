#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11782;
long long int var_3 = 5862972710834908584LL;
unsigned short var_5 = (unsigned short)3153;
short var_7 = (short)17494;
short var_10 = (short)-8254;
int zero = 0;
int var_15 = -1480498377;
unsigned long long int var_16 = 12762088318590837345ULL;
signed char var_17 = (signed char)-33;
long long int var_18 = -7502350552091012394LL;
signed char var_19 = (signed char)110;
long long int var_20 = -3564807617425150447LL;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3720043147798204613LL;
}

void checksum() {
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
