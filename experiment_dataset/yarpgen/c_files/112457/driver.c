#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7068120701812873750LL;
short var_9 = (short)-9891;
signed char var_13 = (signed char)-58;
int var_15 = 845372473;
int zero = 0;
signed char var_17 = (signed char)112;
short var_18 = (short)-7180;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
