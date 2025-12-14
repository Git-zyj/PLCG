#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned long long int var_1 = 10873451584813694314ULL;
long long int var_5 = -5416203402984057509LL;
unsigned long long int var_16 = 14595518328020043231ULL;
unsigned long long int var_17 = 3482448951026804646ULL;
int zero = 0;
int var_20 = 1427984023;
long long int var_21 = -6763408131119339479LL;
unsigned long long int var_22 = 9723586053103911295ULL;
short var_23 = (short)-11103;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
