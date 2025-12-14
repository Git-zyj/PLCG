#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-90;
signed char var_14 = (signed char)76;
int var_17 = 1339795230;
int zero = 0;
long long int var_18 = 5406415952898878850LL;
long long int var_19 = -1727904243982308546LL;
signed char var_20 = (signed char)86;
signed char var_21 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
