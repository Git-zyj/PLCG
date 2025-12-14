#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 333916216U;
long long int var_7 = -7213994436135916531LL;
long long int var_8 = 1572993414397653579LL;
unsigned int var_14 = 560344000U;
signed char var_15 = (signed char)43;
unsigned long long int var_17 = 15460743116331558053ULL;
int zero = 0;
int var_18 = 1379341758;
unsigned int var_19 = 2637445378U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
