#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)7;
unsigned short var_6 = (unsigned short)7654;
unsigned long long int var_8 = 4233606467966553179ULL;
int zero = 0;
signed char var_10 = (signed char)-38;
short var_11 = (short)-30566;
signed char var_12 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
