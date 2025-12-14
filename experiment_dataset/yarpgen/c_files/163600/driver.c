#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 5439968247494425134ULL;
signed char var_6 = (signed char)59;
long long int var_10 = -3286085882450526205LL;
signed char var_15 = (signed char)-116;
int zero = 0;
unsigned short var_16 = (unsigned short)1465;
signed char var_17 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
