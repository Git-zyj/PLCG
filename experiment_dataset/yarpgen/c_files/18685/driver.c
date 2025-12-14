#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3903718025U;
signed char var_6 = (signed char)86;
unsigned char var_11 = (unsigned char)247;
int var_13 = 1987678934;
int zero = 0;
int var_17 = 412683656;
unsigned long long int var_18 = 14947173174290411202ULL;
long long int var_19 = 2874677998034526362LL;
long long int var_20 = -8212504033341214657LL;
void init() {
}

void checksum() {
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
