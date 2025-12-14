#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6227038381365173792LL;
short var_3 = (short)-7485;
unsigned long long int var_6 = 6060818526015332889ULL;
unsigned long long int var_8 = 17748579010530097093ULL;
unsigned long long int var_18 = 16388956629607962169ULL;
int zero = 0;
unsigned int var_20 = 1657389035U;
unsigned long long int var_21 = 2546940706962273596ULL;
void init() {
}

void checksum() {
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
