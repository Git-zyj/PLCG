#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 729560697462887574LL;
unsigned int var_14 = 2098891015U;
unsigned char var_17 = (unsigned char)254;
short var_18 = (short)-29261;
int zero = 0;
unsigned short var_20 = (unsigned short)15700;
int var_21 = -1919804792;
unsigned int var_22 = 3628559924U;
unsigned int var_23 = 131752637U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
