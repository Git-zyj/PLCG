#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3107905418498971414LL;
unsigned long long int var_3 = 11887993789196872802ULL;
short var_5 = (short)-19955;
int zero = 0;
long long int var_13 = -1382379230816363508LL;
unsigned long long int var_14 = 7418412656780527886ULL;
unsigned char var_15 = (unsigned char)80;
long long int var_16 = 4042118926042436709LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
