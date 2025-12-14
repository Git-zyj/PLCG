#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21022;
unsigned char var_9 = (unsigned char)20;
unsigned long long int var_10 = 8478464397057924364ULL;
unsigned long long int var_14 = 12321950370757667750ULL;
long long int var_16 = -4168264439192461793LL;
int zero = 0;
short var_18 = (short)22449;
unsigned long long int var_19 = 1800140348102365637ULL;
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
