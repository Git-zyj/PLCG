#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1549256123405862023ULL;
int var_1 = -943825129;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)48;
unsigned short var_6 = (unsigned short)53513;
int var_7 = 2104975628;
int zero = 0;
short var_14 = (short)-6922;
signed char var_15 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
