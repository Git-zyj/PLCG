#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
long long int var_1 = 1571645736250766985LL;
int var_6 = 36114888;
unsigned int var_8 = 3204992211U;
unsigned int var_12 = 849267721U;
unsigned int var_13 = 2990798119U;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
int var_21 = 759004364;
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
