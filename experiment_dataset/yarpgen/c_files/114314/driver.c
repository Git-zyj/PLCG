#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9539416404194504314ULL;
unsigned short var_9 = (unsigned short)53635;
short var_14 = (short)11746;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-50;
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
