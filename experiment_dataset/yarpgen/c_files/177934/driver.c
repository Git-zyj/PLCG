#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8729310897351539289ULL;
unsigned long long int var_6 = 9434681939672287188ULL;
int var_9 = 1498403850;
unsigned int var_10 = 1388863840U;
signed char var_11 = (signed char)-89;
unsigned int var_13 = 349069351U;
signed char var_15 = (signed char)-71;
int var_16 = 1709829239;
int zero = 0;
int var_18 = -1530642040;
int var_19 = 1191317751;
unsigned int var_20 = 3189680714U;
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
