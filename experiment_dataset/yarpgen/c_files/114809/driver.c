#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40692;
unsigned int var_3 = 38964290U;
long long int var_7 = -6218872178551112067LL;
long long int var_13 = -6527443755279159509LL;
int var_15 = 63640999;
short var_17 = (short)-23054;
int zero = 0;
unsigned long long int var_20 = 401114261146547606ULL;
long long int var_21 = 1765493147837718534LL;
void init() {
}

void checksum() {
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
