#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 661913955;
short var_4 = (short)27215;
short var_6 = (short)-16939;
unsigned int var_7 = 540891945U;
long long int var_11 = -2516966915796061002LL;
unsigned long long int var_13 = 14393905155082257126ULL;
unsigned char var_14 = (unsigned char)123;
int zero = 0;
unsigned int var_15 = 1372301836U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
