#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)136;
unsigned char var_5 = (unsigned char)39;
short var_6 = (short)18765;
unsigned short var_7 = (unsigned short)24464;
unsigned int var_16 = 708446152U;
int zero = 0;
int var_17 = -947898592;
unsigned int var_18 = 604827238U;
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
