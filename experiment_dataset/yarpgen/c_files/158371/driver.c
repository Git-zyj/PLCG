#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-117;
int var_10 = 302904147;
unsigned char var_11 = (unsigned char)51;
unsigned char var_13 = (unsigned char)81;
int zero = 0;
unsigned char var_15 = (unsigned char)14;
long long int var_16 = 4038069359671552861LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
