#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1785437998U;
short var_6 = (short)-24772;
unsigned long long int var_7 = 16934467053866678077ULL;
int var_10 = 1461873079;
unsigned int var_15 = 1235520508U;
unsigned char var_17 = (unsigned char)22;
int zero = 0;
int var_18 = 353939624;
signed char var_19 = (signed char)-35;
short var_20 = (short)-7736;
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
