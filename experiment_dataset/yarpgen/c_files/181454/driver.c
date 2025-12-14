#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3293651205U;
unsigned long long int var_4 = 15292889765257090667ULL;
long long int var_5 = 4045172405502851486LL;
short var_6 = (short)10042;
short var_7 = (short)19910;
int var_9 = 151339542;
int var_11 = 917415854;
int zero = 0;
long long int var_12 = -8796022650667737957LL;
signed char var_13 = (signed char)2;
short var_14 = (short)-17039;
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
