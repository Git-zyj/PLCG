#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8066954512940762776ULL;
short var_4 = (short)19652;
short var_11 = (short)18685;
_Bool var_12 = (_Bool)0;
signed char var_18 = (signed char)-105;
int zero = 0;
unsigned long long int var_20 = 6849654573231195983ULL;
long long int var_21 = 2661066943825760610LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
