#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15203530608384688366ULL;
unsigned char var_7 = (unsigned char)221;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3519698315U;
int zero = 0;
unsigned char var_19 = (unsigned char)120;
long long int var_20 = -74039376800725244LL;
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
