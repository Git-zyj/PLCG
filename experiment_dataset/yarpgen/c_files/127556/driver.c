#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 4130140396909135505LL;
unsigned int var_13 = 1839620161U;
signed char var_14 = (signed char)89;
int zero = 0;
unsigned int var_16 = 3590570556U;
int var_17 = 1054188209;
long long int var_18 = 4117780737984804408LL;
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
