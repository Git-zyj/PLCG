#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-125;
unsigned int var_4 = 3810198082U;
int zero = 0;
unsigned long long int var_10 = 18223441846782018328ULL;
signed char var_11 = (signed char)-28;
unsigned long long int var_12 = 10589484837793618023ULL;
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
