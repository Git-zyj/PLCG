#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)90;
signed char var_4 = (signed char)58;
long long int var_7 = 5486400823622092233LL;
long long int var_10 = -1852187675007466832LL;
int zero = 0;
signed char var_11 = (signed char)-2;
long long int var_12 = 4432415110871752168LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
