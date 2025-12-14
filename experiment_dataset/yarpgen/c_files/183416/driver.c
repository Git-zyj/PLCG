#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15675703091142362868ULL;
signed char var_7 = (signed char)39;
unsigned int var_8 = 2736888954U;
int zero = 0;
signed char var_15 = (signed char)-88;
long long int var_16 = -5742403976100019558LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
