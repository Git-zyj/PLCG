#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 785900055U;
unsigned int var_3 = 638103882U;
signed char var_8 = (signed char)118;
unsigned long long int var_16 = 7843866220821823739ULL;
int zero = 0;
unsigned int var_19 = 2252890830U;
signed char var_20 = (signed char)-123;
unsigned int var_21 = 2632107607U;
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
