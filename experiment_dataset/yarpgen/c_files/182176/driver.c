#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1053934805;
unsigned long long int var_7 = 2106043959457324939ULL;
int var_8 = -1034000775;
unsigned int var_11 = 3073429687U;
int zero = 0;
unsigned long long int var_12 = 12878779339936610294ULL;
signed char var_13 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
