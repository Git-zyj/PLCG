#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)31910;
unsigned int var_4 = 445870004U;
unsigned int var_6 = 1821844527U;
long long int var_9 = 4715573416137219902LL;
int zero = 0;
unsigned char var_17 = (unsigned char)58;
unsigned int var_18 = 298535869U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
