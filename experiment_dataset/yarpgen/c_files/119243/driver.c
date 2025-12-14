#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3483;
unsigned long long int var_5 = 17448029031076551652ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)17670;
int var_12 = 793208193;
int zero = 0;
int var_13 = -1730308954;
long long int var_14 = -781201671104577335LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
