#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -615067865;
unsigned char var_1 = (unsigned char)1;
short var_6 = (short)-24104;
unsigned char var_9 = (unsigned char)40;
int zero = 0;
unsigned int var_10 = 1311858510U;
long long int var_11 = -209600123794916131LL;
unsigned int var_12 = 1335317251U;
int var_13 = 1721528468;
short arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-21278;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
