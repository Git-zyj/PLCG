#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -967549480;
unsigned short var_12 = (unsigned short)637;
unsigned short var_14 = (unsigned short)3767;
int zero = 0;
unsigned int var_20 = 1701031225U;
unsigned short var_21 = (unsigned short)54422;
long long int var_22 = -2962898696408068425LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
