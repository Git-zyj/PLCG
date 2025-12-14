#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
long long int var_1 = 5801272914854210241LL;
signed char var_5 = (signed char)-106;
unsigned char var_7 = (unsigned char)27;
unsigned char var_10 = (unsigned char)62;
signed char var_12 = (signed char)-75;
unsigned long long int var_13 = 6722967916217262859ULL;
int zero = 0;
signed char var_16 = (signed char)43;
signed char var_17 = (signed char)102;
signed char var_18 = (signed char)116;
unsigned long long int var_19 = 12822943365957541004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
