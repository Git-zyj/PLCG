#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11897799073984891342ULL;
unsigned long long int var_1 = 6826969973008977318ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-15260;
unsigned long long int var_4 = 10816234122794580657ULL;
unsigned long long int var_6 = 443035417677836635ULL;
short var_8 = (short)-19109;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-304;
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
