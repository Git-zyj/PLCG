#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 7287579821023179604ULL;
unsigned short var_13 = (unsigned short)18377;
long long int var_18 = -2454437567339748647LL;
int zero = 0;
unsigned int var_20 = 3083478874U;
unsigned char var_21 = (unsigned char)184;
short var_22 = (short)15865;
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
