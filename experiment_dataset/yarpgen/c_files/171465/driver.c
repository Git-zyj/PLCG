#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned long long int var_2 = 14052264207630934029ULL;
unsigned int var_9 = 1545489203U;
int zero = 0;
unsigned long long int var_10 = 1854866590557565612ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
