#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2049578502924890092ULL;
unsigned int var_6 = 170437132U;
long long int var_7 = 6826490039010982818LL;
unsigned char var_9 = (unsigned char)109;
int var_11 = -1326018298;
int zero = 0;
unsigned int var_12 = 911493587U;
unsigned int var_13 = 3622001478U;
int var_14 = 1897808159;
void init() {
}

void checksum() {
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
