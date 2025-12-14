#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17866319463459207337ULL;
unsigned char var_5 = (unsigned char)114;
unsigned long long int var_9 = 13344160215758675519ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)56615;
signed char var_12 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
