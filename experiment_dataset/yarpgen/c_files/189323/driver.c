#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_14 = (short)-13567;
unsigned long long int var_16 = 2503796187667056701ULL;
int var_18 = 1587927672;
int zero = 0;
unsigned int var_20 = 1375949086U;
unsigned long long int var_21 = 3671458218469571126ULL;
int var_22 = 1899705375;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
