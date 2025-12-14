#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)81;
unsigned long long int var_5 = 6087696705657981426ULL;
unsigned long long int var_6 = 16926553800852360673ULL;
unsigned int var_7 = 3883905382U;
unsigned char var_8 = (unsigned char)141;
int zero = 0;
long long int var_10 = 5825664134023795336LL;
unsigned int var_11 = 2986177272U;
unsigned short var_12 = (unsigned short)61643;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
