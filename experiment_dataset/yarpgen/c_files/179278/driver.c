#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 9011737745959449191LL;
_Bool var_5 = (_Bool)0;
long long int var_9 = 4508504363471280425LL;
unsigned char var_10 = (unsigned char)110;
int zero = 0;
int var_14 = -5290176;
unsigned char var_15 = (unsigned char)112;
signed char var_16 = (signed char)-121;
signed char var_17 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
