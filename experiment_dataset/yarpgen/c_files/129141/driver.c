#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5851287620546256261LL;
unsigned char var_3 = (unsigned char)178;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 10918802806779808502ULL;
unsigned long long int var_17 = 14493942543885462731ULL;
signed char var_18 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
