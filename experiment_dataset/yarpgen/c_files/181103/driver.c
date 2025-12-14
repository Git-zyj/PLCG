#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6582260859709393009LL;
short var_5 = (short)-29541;
int var_6 = -226604398;
long long int var_10 = 683099142355508958LL;
int zero = 0;
long long int var_12 = 7868412858238634373LL;
int var_13 = -1722809506;
void init() {
}

void checksum() {
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
