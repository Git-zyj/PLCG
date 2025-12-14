#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-75;
unsigned char var_8 = (unsigned char)63;
signed char var_10 = (signed char)-23;
int zero = 0;
long long int var_12 = 20324126601622927LL;
long long int var_13 = -2464736720679674034LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
