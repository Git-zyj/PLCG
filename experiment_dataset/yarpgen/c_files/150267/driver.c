#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -615778295;
unsigned int var_12 = 2600948109U;
int var_13 = -621021588;
unsigned int var_14 = 3932030U;
int zero = 0;
unsigned int var_16 = 769257352U;
signed char var_17 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
