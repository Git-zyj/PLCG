#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -801983906621340849LL;
int var_3 = -1018498455;
signed char var_4 = (signed char)27;
signed char var_7 = (signed char)22;
int zero = 0;
signed char var_11 = (signed char)32;
unsigned int var_12 = 400858811U;
signed char var_13 = (signed char)-14;
long long int var_14 = -6352178040890223704LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
