#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)51;
unsigned char var_18 = (unsigned char)104;
int zero = 0;
unsigned long long int var_19 = 11816205514267800741ULL;
signed char var_20 = (signed char)-113;
unsigned long long int var_21 = 13138988606794238416ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
