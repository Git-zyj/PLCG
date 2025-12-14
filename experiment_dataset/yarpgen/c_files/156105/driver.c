#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
short var_3 = (short)31197;
int var_4 = -1878721440;
short var_16 = (short)28724;
int zero = 0;
signed char var_18 = (signed char)-55;
signed char var_19 = (signed char)-22;
int var_20 = 1903930300;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
