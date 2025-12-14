#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1217595291U;
_Bool var_3 = (_Bool)1;
int var_8 = 811249926;
unsigned long long int var_9 = 5331413607047954909ULL;
unsigned short var_11 = (unsigned short)20587;
unsigned short var_13 = (unsigned short)16867;
unsigned int var_14 = 1530263594U;
unsigned int var_15 = 446634534U;
unsigned short var_18 = (unsigned short)59412;
int zero = 0;
signed char var_19 = (signed char)-111;
int var_20 = 324966655;
void init() {
}

void checksum() {
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
