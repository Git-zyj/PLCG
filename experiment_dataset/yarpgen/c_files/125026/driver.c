#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15203722112869093148ULL;
long long int var_4 = -8577913176482356332LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)21489;
short var_10 = (short)11293;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2475392231U;
unsigned short var_14 = (unsigned short)30274;
int zero = 0;
int var_15 = -587605635;
long long int var_16 = 6559093667596178905LL;
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
