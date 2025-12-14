#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)20026;
unsigned char var_8 = (unsigned char)39;
int zero = 0;
unsigned long long int var_17 = 531294355385258735ULL;
long long int var_18 = 6784126622495871813LL;
signed char var_19 = (signed char)-89;
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
