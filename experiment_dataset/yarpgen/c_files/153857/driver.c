#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
unsigned long long int var_3 = 7641402115097232616ULL;
signed char var_4 = (signed char)-122;
long long int var_6 = -480460223982737942LL;
signed char var_9 = (signed char)-123;
short var_13 = (short)-21091;
signed char var_15 = (signed char)8;
signed char var_16 = (signed char)51;
int zero = 0;
short var_18 = (short)7090;
unsigned long long int var_19 = 1085681768817858383ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
