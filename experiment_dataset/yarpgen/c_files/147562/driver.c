#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 372705278515469151LL;
long long int var_10 = 752130203931200615LL;
int zero = 0;
unsigned long long int var_20 = 18259683862833737229ULL;
signed char var_21 = (signed char)-116;
unsigned int var_22 = 2133717573U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
