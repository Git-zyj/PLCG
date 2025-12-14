#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
unsigned long long int var_1 = 5583637678749532856ULL;
short var_5 = (short)-31329;
unsigned short var_8 = (unsigned short)20009;
unsigned long long int var_9 = 15881249515240131511ULL;
long long int var_12 = -2260176207826649684LL;
int zero = 0;
unsigned char var_14 = (unsigned char)199;
_Bool var_15 = (_Bool)1;
int var_16 = -960871838;
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
