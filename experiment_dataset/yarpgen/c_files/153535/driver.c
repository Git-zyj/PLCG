#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
signed char var_3 = (signed char)117;
signed char var_6 = (signed char)-123;
signed char var_8 = (signed char)29;
signed char var_14 = (signed char)-22;
signed char var_16 = (signed char)-118;
signed char var_18 = (signed char)-69;
signed char var_19 = (signed char)19;
int zero = 0;
signed char var_20 = (signed char)120;
signed char var_21 = (signed char)-98;
signed char var_22 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
