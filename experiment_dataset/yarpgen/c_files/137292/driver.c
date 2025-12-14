#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 148843037056344532LL;
int var_1 = 1236603909;
long long int var_3 = -144812213059863236LL;
int var_7 = -1828269804;
int zero = 0;
signed char var_13 = (signed char)-28;
signed char var_14 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
