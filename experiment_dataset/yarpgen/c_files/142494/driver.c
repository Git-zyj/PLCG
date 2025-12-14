#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11372;
unsigned long long int var_3 = 7348075702571939436ULL;
unsigned short var_6 = (unsigned short)57984;
unsigned short var_7 = (unsigned short)19775;
int zero = 0;
long long int var_12 = -2654095897181610651LL;
short var_13 = (short)22428;
signed char var_14 = (signed char)80;
long long int var_15 = -6402245610296105445LL;
unsigned short var_16 = (unsigned short)13817;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -1701651310;
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
