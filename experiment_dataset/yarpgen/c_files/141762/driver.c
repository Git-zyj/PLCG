#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7037;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 8094910953441047897ULL;
unsigned short var_7 = (unsigned short)40245;
short var_14 = (short)-6628;
unsigned short var_17 = (unsigned short)12011;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 2093573684;
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
