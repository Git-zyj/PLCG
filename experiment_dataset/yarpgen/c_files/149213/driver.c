#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32275;
long long int var_1 = -9014610605996124940LL;
short var_7 = (short)-22976;
unsigned char var_10 = (unsigned char)207;
unsigned short var_14 = (unsigned short)5721;
int zero = 0;
unsigned long long int var_17 = 5579908573462958598ULL;
unsigned int var_18 = 4278975U;
unsigned long long int var_19 = 4872801381533924920ULL;
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
