#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7151189456988060381LL;
signed char var_3 = (signed char)126;
short var_4 = (short)16226;
signed char var_6 = (signed char)-22;
short var_7 = (short)-3196;
short var_9 = (short)-6060;
int zero = 0;
unsigned char var_14 = (unsigned char)228;
int var_15 = -1786935254;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
