#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46600;
long long int var_5 = -4487609461734627599LL;
unsigned short var_6 = (unsigned short)48860;
long long int var_8 = -524766734161625810LL;
int zero = 0;
unsigned long long int var_11 = 16603708576895423877ULL;
unsigned char var_12 = (unsigned char)40;
unsigned long long int var_13 = 10802179472010365039ULL;
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
