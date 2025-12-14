#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1056036535;
long long int var_6 = 4668912340380514027LL;
short var_10 = (short)15365;
long long int var_15 = 2308905470859808588LL;
int zero = 0;
signed char var_19 = (signed char)-67;
short var_20 = (short)-25917;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
