#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)51;
int var_5 = 590205949;
_Bool var_7 = (_Bool)1;
unsigned int var_12 = 1698879964U;
int zero = 0;
unsigned long long int var_14 = 9115703217737557459ULL;
unsigned int var_15 = 733431698U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
