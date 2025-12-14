#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)182;
int var_10 = 1751369467;
unsigned long long int var_11 = 9893454747983145157ULL;
long long int var_16 = 7725469947560488145LL;
unsigned int var_17 = 620930027U;
int zero = 0;
int var_18 = -1215913851;
short var_19 = (short)12375;
unsigned int var_20 = 1973027812U;
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
