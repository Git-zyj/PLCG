#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2116972959U;
int var_4 = 2078059022;
unsigned short var_5 = (unsigned short)56926;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 15714237684422709131ULL;
int zero = 0;
unsigned int var_11 = 2822540030U;
short var_12 = (short)28672;
unsigned long long int var_13 = 3550462607539077541ULL;
void init() {
}

void checksum() {
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
