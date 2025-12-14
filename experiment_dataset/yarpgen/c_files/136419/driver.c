#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 1159621592U;
unsigned char var_15 = (unsigned char)6;
int zero = 0;
unsigned char var_17 = (unsigned char)187;
unsigned long long int var_18 = 7289431749259697843ULL;
unsigned short var_19 = (unsigned short)10354;
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
