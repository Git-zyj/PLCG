#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6552502904550026885LL;
int var_10 = -1049403040;
unsigned short var_11 = (unsigned short)42923;
long long int var_14 = -7199088180340159372LL;
int zero = 0;
unsigned char var_15 = (unsigned char)48;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 6416166862422879120ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
