#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29782;
int var_4 = -1716320103;
unsigned long long int var_7 = 1870344979337815084ULL;
unsigned long long int var_8 = 7172801736077175836ULL;
long long int var_9 = 116726971674288436LL;
unsigned short var_10 = (unsigned short)16671;
int zero = 0;
unsigned long long int var_15 = 10616170408120615499ULL;
signed char var_16 = (signed char)17;
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
