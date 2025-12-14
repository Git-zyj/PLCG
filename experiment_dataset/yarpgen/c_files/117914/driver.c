#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10232862510390830746ULL;
unsigned int var_6 = 2636574412U;
int var_10 = 2021351990;
int zero = 0;
signed char var_18 = (signed char)35;
unsigned short var_19 = (unsigned short)61650;
long long int var_20 = 7771872055147648316LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
