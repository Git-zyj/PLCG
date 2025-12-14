#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)67;
unsigned long long int var_3 = 10293351615985123231ULL;
int var_10 = 1258693425;
unsigned short var_11 = (unsigned short)19953;
unsigned short var_16 = (unsigned short)51708;
unsigned int var_19 = 1966358275U;
int zero = 0;
long long int var_20 = -3567585518106072667LL;
signed char var_21 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
