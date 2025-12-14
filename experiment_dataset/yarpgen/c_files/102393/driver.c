#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2829919976867340759LL;
unsigned long long int var_10 = 16605103401348373621ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)32;
signed char var_18 = (signed char)111;
int zero = 0;
long long int var_19 = 7301738510480427937LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
