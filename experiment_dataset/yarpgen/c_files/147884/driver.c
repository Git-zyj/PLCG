#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16820937188295551091ULL;
unsigned long long int var_3 = 4344702264138944532ULL;
unsigned char var_5 = (unsigned char)219;
unsigned char var_8 = (unsigned char)91;
unsigned long long int var_9 = 1263689690596737497ULL;
int zero = 0;
unsigned long long int var_10 = 566732300586003268ULL;
unsigned long long int var_11 = 16602189570654970475ULL;
signed char var_12 = (signed char)48;
long long int var_13 = 5214062221741249077LL;
unsigned char var_14 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
