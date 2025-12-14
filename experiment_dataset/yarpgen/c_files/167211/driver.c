#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7916473588103719254LL;
long long int var_2 = 8750501810529872108LL;
long long int var_3 = -2883826198952899473LL;
unsigned short var_4 = (unsigned short)59546;
short var_9 = (short)-27749;
unsigned short var_13 = (unsigned short)14798;
unsigned short var_14 = (unsigned short)54582;
short var_15 = (short)-22608;
int zero = 0;
short var_16 = (short)-8137;
long long int var_17 = -906990385754792769LL;
short var_18 = (short)12408;
unsigned int var_19 = 2030886730U;
unsigned int var_20 = 2175955285U;
void init() {
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
