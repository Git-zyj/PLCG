#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)58;
unsigned long long int var_9 = 4225081120971707594ULL;
signed char var_13 = (signed char)-57;
int zero = 0;
unsigned long long int var_15 = 7038356323531772543ULL;
unsigned long long int var_16 = 50352389203119856ULL;
short var_17 = (short)27165;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
