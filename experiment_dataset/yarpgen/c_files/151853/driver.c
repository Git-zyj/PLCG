#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2967599211U;
short var_3 = (short)29716;
long long int var_4 = 4393493323087673487LL;
unsigned long long int var_6 = 7648332196391347838ULL;
short var_7 = (short)-24708;
unsigned long long int var_9 = 2196078306506488679ULL;
unsigned char var_11 = (unsigned char)29;
long long int var_13 = -2059057871031633322LL;
short var_14 = (short)25628;
unsigned int var_15 = 1564789384U;
int zero = 0;
unsigned long long int var_16 = 16399999982695525533ULL;
long long int var_17 = 6216860906935044815LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
