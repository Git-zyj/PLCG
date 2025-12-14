#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -211463686;
signed char var_7 = (signed char)40;
signed char var_8 = (signed char)-123;
unsigned short var_9 = (unsigned short)21403;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)120;
unsigned int var_13 = 3783597777U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
