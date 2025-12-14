#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2432366992192399955LL;
long long int var_4 = 2633504568937884508LL;
short var_10 = (short)-17039;
unsigned short var_19 = (unsigned short)23881;
int zero = 0;
unsigned long long int var_20 = 14208980547255287902ULL;
unsigned int var_21 = 3848716845U;
short var_22 = (short)17943;
unsigned short var_23 = (unsigned short)39960;
unsigned long long int var_24 = 603843587257346912ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
