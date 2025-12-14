#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-32;
long long int var_9 = 2522043489976966641LL;
unsigned long long int var_16 = 2859901361637649347ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-70;
short var_22 = (short)-13816;
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
