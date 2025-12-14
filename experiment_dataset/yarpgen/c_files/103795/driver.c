#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -2130659957;
unsigned int var_14 = 2161263155U;
int zero = 0;
long long int var_19 = -3576908402273605802LL;
unsigned int var_20 = 3253409993U;
short var_21 = (short)25381;
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
