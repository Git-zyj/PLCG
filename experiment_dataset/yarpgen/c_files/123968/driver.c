#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9488378361059152220ULL;
unsigned long long int var_2 = 7280489445080815664ULL;
unsigned long long int var_3 = 17806093782146466037ULL;
unsigned int var_4 = 1912909009U;
unsigned short var_6 = (unsigned short)15608;
unsigned long long int var_10 = 506537934672858620ULL;
int var_11 = -915991973;
int zero = 0;
unsigned long long int var_14 = 4935734861304012379ULL;
unsigned long long int var_15 = 5683612438315257769ULL;
unsigned char var_16 = (unsigned char)168;
int var_17 = 1459623805;
unsigned short var_18 = (unsigned short)62437;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
