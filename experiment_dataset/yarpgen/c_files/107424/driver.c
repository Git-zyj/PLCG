#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19348;
unsigned short var_1 = (unsigned short)17080;
int var_2 = 19103342;
long long int var_4 = 8549521786224452993LL;
unsigned long long int var_6 = 17595442895228840014ULL;
unsigned int var_7 = 2379426288U;
unsigned short var_9 = (unsigned short)41029;
int var_10 = 946006197;
int zero = 0;
int var_12 = -1503460566;
int var_13 = 1934190785;
long long int var_14 = -9032953358962757601LL;
unsigned char var_15 = (unsigned char)173;
unsigned short var_16 = (unsigned short)32121;
int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1217729545;
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
