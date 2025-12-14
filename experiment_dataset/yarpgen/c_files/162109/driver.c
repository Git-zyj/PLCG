#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)23306;
unsigned short var_2 = (unsigned short)11957;
unsigned long long int var_5 = 8500134978007489775ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)35;
unsigned long long int var_15 = 4294444944040089612ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
