#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2102865273;
short var_6 = (short)23199;
short var_8 = (short)-16184;
short var_12 = (short)-16227;
long long int var_15 = -7383910740492227773LL;
int zero = 0;
unsigned int var_17 = 2068175567U;
unsigned long long int var_18 = 17026763396724998974ULL;
unsigned long long int var_19 = 2696517728204686925ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
