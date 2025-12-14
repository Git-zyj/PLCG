#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 256640802;
signed char var_3 = (signed char)-105;
short var_7 = (short)-26229;
int var_8 = 737659380;
long long int var_9 = -4900057847248693893LL;
unsigned long long int var_10 = 13158291197347259561ULL;
int zero = 0;
unsigned long long int var_12 = 18311876767762326223ULL;
int var_13 = -1398376892;
void init() {
}

void checksum() {
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
