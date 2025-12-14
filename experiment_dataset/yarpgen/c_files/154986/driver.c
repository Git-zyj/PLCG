#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
signed char var_2 = (signed char)-83;
int var_6 = 941957546;
unsigned long long int var_15 = 15502824994155125163ULL;
int zero = 0;
signed char var_17 = (signed char)48;
short var_18 = (short)9983;
signed char var_19 = (signed char)45;
unsigned long long int var_20 = 2420096949156685708ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
