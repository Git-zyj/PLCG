#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1581973552U;
long long int var_4 = 2721440338567207117LL;
long long int var_7 = 8977456944277156136LL;
unsigned int var_11 = 3494007812U;
int zero = 0;
unsigned int var_13 = 3921286412U;
short var_14 = (short)-9932;
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
