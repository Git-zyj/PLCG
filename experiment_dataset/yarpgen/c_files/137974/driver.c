#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10724;
unsigned long long int var_3 = 5034764692128109829ULL;
unsigned long long int var_13 = 15499867325751791447ULL;
signed char var_15 = (signed char)-93;
int var_16 = -923949293;
int zero = 0;
long long int var_17 = 5568944134827731716LL;
signed char var_18 = (signed char)34;
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
