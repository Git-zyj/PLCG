#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6496725251757465256LL;
int var_3 = -1818967824;
signed char var_5 = (signed char)92;
unsigned int var_10 = 242436361U;
int zero = 0;
unsigned int var_11 = 4052515643U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
