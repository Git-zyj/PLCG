#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1426660989;
short var_3 = (short)-29775;
short var_5 = (short)-28394;
short var_6 = (short)-10626;
unsigned long long int var_8 = 15877681671794074349ULL;
int var_9 = -1490245893;
long long int var_13 = -7142256393500506553LL;
int zero = 0;
unsigned short var_16 = (unsigned short)64452;
unsigned long long int var_17 = 14421667639338470883ULL;
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
