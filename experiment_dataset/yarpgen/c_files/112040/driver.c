#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8780451109168332386LL;
unsigned int var_12 = 4063962931U;
_Bool var_16 = (_Bool)0;
int var_17 = 394405546;
int zero = 0;
int var_20 = 752125200;
int var_21 = -1695308258;
long long int var_22 = -3513311355992496860LL;
int var_23 = -1887181593;
int var_24 = 363119565;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
