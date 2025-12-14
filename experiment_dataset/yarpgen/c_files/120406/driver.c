#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)119;
unsigned char var_9 = (unsigned char)110;
unsigned long long int var_15 = 6705070413185530732ULL;
unsigned long long int var_17 = 15329956171143351538ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)61;
unsigned long long int var_19 = 4992539791520011690ULL;
void init() {
}

void checksum() {
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
