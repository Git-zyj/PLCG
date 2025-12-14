#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4241392219598862765LL;
unsigned int var_6 = 4227690528U;
long long int var_16 = 1086979743799305169LL;
unsigned int var_17 = 3819544183U;
int zero = 0;
signed char var_18 = (signed char)-62;
signed char var_19 = (signed char)-86;
long long int var_20 = 4857625444971772229LL;
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
