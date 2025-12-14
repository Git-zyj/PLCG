#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
unsigned int var_4 = 423514935U;
signed char var_9 = (signed char)-64;
int zero = 0;
signed char var_13 = (signed char)31;
long long int var_14 = -8506053111816528709LL;
int var_15 = 279464168;
unsigned long long int var_16 = 5285151489064628013ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
