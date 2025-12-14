#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2918;
long long int var_4 = 4626077574554258875LL;
signed char var_5 = (signed char)25;
long long int var_6 = -762160864841582363LL;
unsigned long long int var_9 = 1408534469252258192ULL;
short var_10 = (short)3647;
signed char var_12 = (signed char)73;
int zero = 0;
long long int var_16 = -5578692281675678138LL;
signed char var_17 = (signed char)-27;
short var_18 = (short)2235;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
