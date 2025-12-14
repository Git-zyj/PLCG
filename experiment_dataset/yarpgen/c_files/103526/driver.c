#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 920875303U;
short var_5 = (short)-9939;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_17 = 3596210420268795425LL;
unsigned int var_18 = 568435230U;
long long int var_19 = -4599843927557011797LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
