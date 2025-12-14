#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12967585243515355990ULL;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)116;
unsigned int var_7 = 4071083497U;
int var_10 = 784734878;
int zero = 0;
unsigned long long int var_13 = 17396070596591380705ULL;
long long int var_14 = 6201948331491317946LL;
long long int var_15 = 3069726034664517855LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
