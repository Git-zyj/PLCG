#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28520;
short var_11 = (short)24181;
unsigned long long int var_17 = 8429304820562996857ULL;
int zero = 0;
long long int var_18 = 5636115364436671065LL;
unsigned long long int var_19 = 3043440211636042971ULL;
void init() {
}

void checksum() {
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
