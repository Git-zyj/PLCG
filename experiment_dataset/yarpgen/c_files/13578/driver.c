#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1656819530;
unsigned long long int var_5 = 567887493150411731ULL;
unsigned char var_7 = (unsigned char)231;
int zero = 0;
unsigned short var_17 = (unsigned short)60605;
unsigned long long int var_18 = 18294858025810603816ULL;
void init() {
}

void checksum() {
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
