#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9655285314157522006ULL;
unsigned char var_12 = (unsigned char)251;
unsigned long long int var_13 = 14470228375634713658ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15412748996588606859ULL;
unsigned long long int var_21 = 8501465804875965142ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
