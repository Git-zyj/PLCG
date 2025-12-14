#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 852641799;
long long int var_3 = 937290147169616733LL;
long long int var_5 = -551919949602314114LL;
short var_6 = (short)17962;
short var_7 = (short)-10908;
int var_10 = -1261151366;
int zero = 0;
signed char var_12 = (signed char)88;
long long int var_13 = -4294651328007934326LL;
short var_14 = (short)18454;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
