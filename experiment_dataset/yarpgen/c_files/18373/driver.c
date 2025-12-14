#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12742;
short var_1 = (short)2123;
long long int var_2 = 3183661595733762733LL;
short var_6 = (short)-11996;
unsigned long long int var_7 = 7410170801078327799ULL;
unsigned int var_14 = 97832219U;
int zero = 0;
unsigned long long int var_16 = 1919269268097046468ULL;
signed char var_17 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
