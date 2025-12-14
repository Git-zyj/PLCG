#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2685313055U;
signed char var_13 = (signed char)-57;
unsigned char var_16 = (unsigned char)123;
long long int var_18 = -4243429924002035752LL;
int zero = 0;
long long int var_19 = -5456463109404948960LL;
unsigned char var_20 = (unsigned char)171;
long long int var_21 = -7814939011363672969LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
