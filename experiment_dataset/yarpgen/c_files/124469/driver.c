#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12648;
signed char var_2 = (signed char)-95;
unsigned long long int var_4 = 2116635071677304323ULL;
unsigned char var_5 = (unsigned char)121;
long long int var_8 = 5047987480358111837LL;
short var_9 = (short)-11492;
int zero = 0;
unsigned char var_11 = (unsigned char)75;
unsigned char var_12 = (unsigned char)51;
signed char var_13 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
