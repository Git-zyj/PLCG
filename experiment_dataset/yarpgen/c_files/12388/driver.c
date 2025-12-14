#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16106363312817030369ULL;
_Bool var_4 = (_Bool)1;
int var_7 = 1481975752;
unsigned long long int var_11 = 13156304401048481503ULL;
unsigned char var_13 = (unsigned char)67;
int zero = 0;
int var_14 = -166772214;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
