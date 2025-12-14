#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28423;
short var_7 = (short)8588;
int var_8 = 1062761906;
signed char var_9 = (signed char)39;
short var_10 = (short)13699;
int zero = 0;
unsigned long long int var_11 = 16334845689563113529ULL;
int var_12 = 319685432;
unsigned long long int var_13 = 12057435842603497953ULL;
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
