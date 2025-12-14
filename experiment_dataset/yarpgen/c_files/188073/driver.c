#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)207;
unsigned short var_5 = (unsigned short)53971;
unsigned long long int var_7 = 3191911936669942088ULL;
int var_9 = 1768613007;
int zero = 0;
unsigned long long int var_10 = 6140054127859855837ULL;
unsigned long long int var_11 = 11095743979030955750ULL;
int var_12 = 2066588959;
unsigned long long int var_13 = 16892496040050585579ULL;
unsigned long long int var_14 = 12478310702956947050ULL;
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
